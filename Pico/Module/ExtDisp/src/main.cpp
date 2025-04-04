
// ****************************************************************************
//
//                                 Main code
//
// ****************************************************************************

#include "../include.h"

#define GRABBER_C	0	// 1=use grabber in C code instead of assembler

// Flag MINIVGA_IRQTIME is defined in _display/minivga/minivga.h
//   MINIVGA_IRQTIME	// debug flag - measure delta time of VGA service (use GRABBER_C flag)

// Flag DVI_IRQTIME is defined in _display/dvi/dvi.h and _display/dvivga/dvivga.h
//   DVI_IRQTIME	// debug flag - measure delta time of DVI service (use GRABBER_C flag)

#define ST7789_CASET		0x2A	// set start and end column of draw window
#define ST7789_RASET		0x2B	// set start and end row of draw window
#define ST7789_RAMWR		0x2C	// start write data to draw window
#define ST7789_MADCTL		0x36	// set rotation mode
#define ST7789_RAMCTRL		0xB0	// RAM control, data 2 bytes

#define ST7789_MADCTL_RGB	0x08	// B3: RGB/BGR order (0=RGB, 1=BGR)

Bool DispBGR = False;		// use BGR data mode instead of RGB
Bool DispLittleEndian = False;	// use Little Endian data (LSB first)

// initialize SPI grabber PIO
void SpiPioInit()
{
	// initialize PIO
	PioInit(SPI_PIO);

	// load PIO program
	PioLoadProg(SPI_PIO, grabber_program_instructions, count_of(grabber_program_instructions), SPI_PIO_OFF);

	// PIO set wrap address
	PioSetWrap(SPI_PIO, SPI_SM, SPI_PIO_OFF + grabber_wrap_target, SPI_PIO_OFF + grabber_wrap);

	// set start address
	PioSetAddr(SPI_PIO, SPI_SM, SPI_PIO_OFF + grabber_offset_start);

	// configure GPIOs for use by PIO
	PioSetupGPIO(SPI_PIO, SPI_GPIO_FIRST, SPI_GPIO_NUM);

	// set pin direction to input
	PioSetPinDir(SPI_PIO, SPI_SM, SPI_GPIO_FIRST, SPI_GPIO_NUM, 0);

	// switch OFF pin synchronization to get faster input
	PioInBypassMask(SPI_PIO, RangeMask(SPI_GPIO_FIRST, SPI_GPIO_FIRST+SPI_GPIO_NUM-1));

	// invert DC pin
	GPIO_InOverInvert(SPI_GPIO_DC);

	// pull-ups (to work without master)
	int i;
	for (i = SPI_GPIO_FIRST; i < SPI_GPIO_FIRST+SPI_GPIO_NUM; i++) GPIO_PullUp(i);

	// map state machine's IN pins	
	PioSetupIn(SPI_PIO, SPI_SM, SPI_GPIO_FIRST);

	// set sideset pins (no sideset)
	PioSetupSideset(SPI_PIO, SPI_SM, 0, 0, False, False);

	// setup JMP PIN instructin to check CS pin
	PioSetJmpPin(SPI_PIO, SPI_SM, SPI_GPIO_CS);

	// join FIFO to receive only
	PioSetFifoJoin(SPI_PIO, SPI_SM, PIO_FIFO_JOIN_RX);

	// PIO clock divider
	PioSetClkdiv(SPI_PIO, SPI_SM, 1*256);

	// shift left, autopush on 9 bits
	PioSetInShift(SPI_PIO, SPI_SM, False, True, 9);

	// enable state machine
	PioSMEnable(SPI_PIO, SPI_SM);
}

#if GRABBER_C		// use grabber in C code (or use assembler otherwise)

// read data from RX FIFO of PIO state machine, wait if RX FIFO is empty
//  pio ... PIO number 0 or 1
//  sm ... state machine 0 to 3
INLINE u32 Proc_PioReadWait()
{
	while (PioRxIsEmpty(SPI_PIO, SPI_SM)) {}
	return PioRead(SPI_PIO, SPI_SM);
}

// process
void NOFLASH(GrabberC)()
{
	int h = HEIGHT;
	int w = WIDTH;
	int x = 0;
	int y = 0;
	int dd = 0;

	int i, j, k, k2;
	u16* d;		// destination pointer

#if MINIVGA_IRQTIME			// debug flag - measure delta time of VGA service
	u32 tin = 0;
	u32 tout = 0;
	char buf[40];
#endif // MINIVGA_IRQTIME

#if DVI_IRQTIME			// debug flag - measure delta time of DVI service
	u32 tin2 = 0;
	u32 tout2 = 0;
	char buf2[40];
#endif // DVI_IRQTIME

	// main loop
	while (True)
	{
#if MINIVGA_IRQTIME			// debug flag - measure delta time of VGA service
		MemPrint(buf, 40, "VGA IN=%dus OUT=%dus    ", VgaTimeIn, VgaTimeOut);
		DrawTextBg(buf, 0, 0, COL_WHITE, COL_BLACK);
#endif // MINIVGA_IRQTIME

#if DVI_IRQTIME			// debug flag - measure delta time of DVI service
		MemPrint(buf2, 40, "DVI IN=%dus OUT=%dus IN2=%dus OUT2=%dus   ",
				DviTimeIn, DviTimeOut, DviTimeIn2, DviTimeOut2);
		DrawTextBg(buf2, 0, 16, COL_WHITE, COL_BLACK);
#endif // DVI_IRQTIME

		// wait for command
		do {
			k = Proc_PioReadWait();
		} while (k < 0x100);

		// command
COMMAND:
		k = (u8)k;
		switch (k)
		{
		// set start and end column of draw window
		case ST7789_CASET:

			// start X
			k = Proc_PioReadWait();
			if (k >= 0x100) goto COMMAND;
			k2 = Proc_PioReadWait();
			if (k2 >= 0x100) { k = k2; goto COMMAND; }
			x = (k << 8) | k2;
			if (x >= WIDTH) x = WIDTH-1;

			// stop X
			k = Proc_PioReadWait();
			if (k >= 0x100) goto COMMAND;
			k2 = Proc_PioReadWait();
			if (k2 >= 0x100) { k = k2; goto COMMAND; }
			w = (k << 8) | k2;
			w++;
			if (w > WIDTH) w = WIDTH;
			w -= x;
			if (w < 1) w = 1;

			dd = WIDTH - w;
			break;

		// set start and end row of draw window
		case ST7789_RASET:

			// start Y
			k = Proc_PioReadWait();
			if (k >= 0x100) goto COMMAND;
			k2 = Proc_PioReadWait();
			if (k2 >= 0x100) { k = k2; goto COMMAND; }
			y = (k << 8) | k2;
			if (y >= HEIGHT) y = HEIGHT-1;

			// stop Y
			k = Proc_PioReadWait();
			if (k >= 0x100) goto COMMAND;
			k2 = Proc_PioReadWait();
			if (k2 >= 0x100) { k = k2; goto COMMAND; }
			h = (k << 8) | k2;
			h++;
			if (h > HEIGHT) h = HEIGHT;
			h -= y;
			if (h < 1) h = 1;

			break;

		// set memory mode
		case ST7789_MADCTL:
			k = Proc_PioReadWait();
			if (k >= 0x100) goto COMMAND;
			DispBGR = ((k & ST7789_MADCTL_RGB) != 0);
			break;

		// set RAM control
		case ST7789_RAMCTRL:
			k = Proc_PioReadWait();
			if (k >= 0x100) goto COMMAND;

			k2 = Proc_PioReadWait();
			if (k2 >= 0x100) { k = k2; goto COMMAND; }

			// use Little Endian data (LSB first)
			DispLittleEndian = ((k2 & B3) != 0);
			break;

		// start write data to draw window
		case ST7789_RAMWR:
			d = &FrameBuf[x + y*WIDTH];

			// use Little Endian data (LSB first)
			if (DispLittleEndian)
			{
				if (DispBGR)
				{
					// load data in BGR format, Little Endian
					for (i = h; i > 0; i--)
					{
						for (j = w; j > 0; j--)
						{
							k = Proc_PioReadWait();
							if (k >= 0x100) goto COMMAND;

							k2 = Proc_PioReadWait();
							if (k2 >= 0x100) { k = k2; goto COMMAND; }

#if MINIVGA_IRQTIME || DVI_IRQTIME		// debug flag - measure delta time of VGA/DVI service
							d++;
#else // MINIVGA_IRQTIME
							k = (u16)(k | (k2 << 8));
							k = (k << 11) | (k & 0x07e0) | (k >> 11);
							*d++ = (u16)k;
#endif // MINIVGA_IRQTIME
						}
						d += dd;
					}
				}
				else
				{
					// load data in RGB format, Little Endian
					for (i = h; i > 0; i--)
					{
						for (j = w; j > 0; j--)
						{
							k = Proc_PioReadWait();
							if (k >= 0x100) goto COMMAND;

							k2 = Proc_PioReadWait();
							if (k2 >= 0x100) { k = k2; goto COMMAND; }

#if MINIVGA_IRQTIME || DVI_IRQTIME		// debug flag - measure delta time of VGA/DVI service
							d++;
#else // MINIVGA_IRQTIME
							*d++ = (u16)(k | (k2 << 8));
#endif // MINIVGA_IRQTIME
						}

						d += dd;
					}
				}
			}

			// use Big Endian data (MSB first)
			else
			{
				if (DispBGR)
				{
					// load data in BGR format, Big Endian
					for (i = h; i > 0; i--)
					{
						for (j = w; j > 0; j--)
						{
							k2 = Proc_PioReadWait();
							if (k2 >= 0x100) { k = k2; goto COMMAND; }

							k = Proc_PioReadWait();
							if (k >= 0x100) goto COMMAND;

#if MINIVGA_IRQTIME || DVI_IRQTIME		// debug flag - measure delta time of VGA/DVI service
							d++;
#else // MINIVGA_IRQTIME
							k = (u16)(k | (k2 << 8));
							k = (k << 11) | (k & 0x07e0) | (k >> 11);
							*d++ = (u16)k;
#endif // MINIVGA_IRQTIME
						}
						d += dd;
					}
				}
				else
				{
					// load data in RGB format, Big Endian
					for (i = h; i > 0; i--)
					{
						for (j = w; j > 0; j--)
						{
							k2 = Proc_PioReadWait();
							if (k2 >= 0x100) { k = k2; goto COMMAND; }

							k = Proc_PioReadWait();
							if (k >= 0x100) goto COMMAND;

#if MINIVGA_IRQTIME || DVI_IRQTIME		// debug flag - measure delta time of VGA/DVI service
							d++;
#else // MINIVGA_IRQTIME
							*d++ = (u16)(k | (k2 << 8));
#endif // MINIVGA_IRQTIME
						}

						d += dd;
					}
				}
			}
			break;
		}
	}
}
#endif // GRABBER_C

int main()
{
	int y;

	// initialize SPI grabber PIO
	SpiPioInit();

	// select mode (if not VGA+DVI mode)
#if !USE_DVIVGA			// use DVI (HDMI) + VGA display with simple frame buffer:
	GPIO_Init(DISPSEL_GPIO);
	GPIO_DirIn(DISPSEL_GPIO);
	GPIO_PullUp(DISPSEL_GPIO);
	WaitUs(100);

	if (GPIO_In(DISPSEL_GPIO))
		DviStart();
	else
		VgaStart();
#else
	DviStart();
#endif

	// draw rainbow gradient
	for (y = 0; y < HEIGHT; y++) GenGrad(&FrameBuf[y*WIDTH], WIDTH);

	// print setup
//	printf("CLK_SYS=%dMHz\n", ClockGetHz(CLK_SYS)/1000000);
//	printf("CLKDIV=%d\n", SSI_FlashClkDiv());
//	printf("VREG=%.2fV\n", VregVoltageFloat());

	// input grabber
#if GRABBER_C		// use grabber in C code (or use assembler otherwise)
	GrabberC();
#else
	Grabber();
#endif
}
