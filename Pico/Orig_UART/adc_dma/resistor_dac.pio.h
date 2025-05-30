// -------------------------------------------------- //
// This file is autogenerated by pioasm; do not edit! //
// -------------------------------------------------- //

#pragma once

#if !PICO_NO_HARDWARE
#include "hardware/pio.h"
#endif

// ----------------- //
// resistor_dac_5bit //
// ----------------- //

#define resistor_dac_5bit_wrap_target 0
#define resistor_dac_5bit_wrap 0

static const uint16_t resistor_dac_5bit_program_instructions[] = {
            //     .wrap_target
    0x6005, //  0: out    pins, 5                    
            //     .wrap
};

#if !PICO_NO_HARDWARE
static const struct pio_program resistor_dac_5bit_program = {
    .instructions = resistor_dac_5bit_program_instructions,
    .length = 1,
    .origin = -1,
};

static inline pio_sm_config resistor_dac_5bit_program_get_default_config(uint offset) {
    pio_sm_config c = pio_get_default_sm_config();
    sm_config_set_wrap(&c, offset + resistor_dac_5bit_wrap_target, offset + resistor_dac_5bit_wrap);
    return c;
}

//#include "hardware/clocks.h"
static inline void resistor_dac_5bit_program_init(PIO pio, uint sm, uint offset,
        uint sample_rate_hz, uint pin_base) {
    pio_sm_set_pins_with_mask(pio, sm, 0, 0x1fu << pin_base);
    pio_sm_set_pindirs_with_mask(pio, sm, ~0u, 0x1fu << pin_base);
    for (int i = 0; i < 5; ++i)
        pio_gpio_init(pio, pin_base + i);
    pio_sm_config c = resistor_dac_5bit_program_get_default_config(offset);
    sm_config_set_out_pins(&c, pin_base, 5);
    // Shift to right, autopull threshold 5
    sm_config_set_out_shift(&c, true, true, 5);
    // Deeper FIFO as we're not doing any RX
    sm_config_set_fifo_join(&c, PIO_FIFO_JOIN_TX);
    float div = (float)clock_get_hz(clk_sys) / sample_rate_hz;
    sm_config_set_clkdiv(&c, div);
    pio_sm_init(pio, sm, offset, &c);
    pio_sm_set_enabled(pio, sm, true);
}

#endif

