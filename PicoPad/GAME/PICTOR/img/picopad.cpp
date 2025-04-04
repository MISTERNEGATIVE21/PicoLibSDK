#include "../include.h"

// format: 4-bit paletted pixel graphics
// image width: 40 pixels
// image height: 16 lines
// image pitch: 20 bytes
const u16 PicopadImg_Pal[16] __attribute__ ((aligned(4))) = {
	0xF81F, 0x0020, 0x08C4, 0x2A0A, 0x5414, 0x6D3A, 0x3AEE, 0x1967, 0xE75A, 0x9490, 0x5268, 0x7B6A, 0xD551, 0xC36B, 0x79E7, 0x0000, 
};

const u8 PicopadImg[320] __attribute__ ((aligned(4))) = {
	0x04, 0x33, 0x33, 0x33, 0x77, 0x77, 0x33, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x7A, 
	0xAA, 0xAA, 0xA7, 0x40, 0x56, 0x3A, 0xBA, 0x77, 0x77, 0x22, 0xBB, 0xBB, 0xBB, 0xBB, 0xBB, 0xBB, 
	0xBB, 0xBB, 0x9B, 0xBC, 0xCC, 0xCC, 0xCB, 0xA5, 0x47, 0x69, 0x97, 0x66, 0x63, 0x46, 0x76, 0x66, 
	0x66, 0x66, 0x66, 0x36, 0x36, 0x62, 0x22, 0x2A, 0x2A, 0xAA, 0x72, 0x16, 0x7A, 0x88, 0xC1, 0x77, 
	0x27, 0x32, 0x76, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x62, 0xA9, 0x99, 0x62, 0x11, 0x11, 0x13, 
	0x69, 0x89, 0x36, 0x22, 0x99, 0xC3, 0x7D, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDE, 0x32, 0x7A, 0xB9, 
	0x63, 0x27, 0x54, 0x17, 0x88, 0x8A, 0x45, 0x47, 0x88, 0x86, 0x3D, 0x1E, 0xD7, 0xEA, 0xA2, 0xD5, 
	0x5D, 0x32, 0x11, 0x13, 0x67, 0x24, 0x44, 0x42, 0x47, 0x17, 0x56, 0x41, 0x17, 0x89, 0x3D, 0x2E, 
	0xEE, 0xE1, 0xEE, 0xE5, 0x5E, 0x69, 0x7A, 0x35, 0x46, 0x13, 0x44, 0x42, 0x27, 0x47, 0x45, 0x36, 
	0x67, 0xC9, 0x69, 0x12, 0xED, 0xDE, 0xDD, 0xE4, 0x5B, 0x38, 0xCB, 0x75, 0x64, 0x22, 0x64, 0x22, 
	0x75, 0x45, 0x61, 0x54, 0x45, 0x98, 0x6D, 0x2A, 0xDC, 0xDB, 0xDD, 0xDE, 0x4D, 0x29, 0xCC, 0xA3, 
	0x56, 0x37, 0x66, 0x12, 0x75, 0x45, 0x67, 0x54, 0x54, 0x7A, 0x6D, 0x2E, 0xDB, 0xBA, 0xDB, 0xDB, 
	0x5B, 0x39, 0x29, 0x92, 0x32, 0x23, 0x54, 0x62, 0x23, 0x42, 0x48, 0x33, 0x37, 0x61, 0x3C, 0xEB, 
	0xCC, 0xDC, 0xCD, 0xC8, 0x5D, 0x66, 0x11, 0x74, 0x56, 0x13, 0x46, 0x52, 0x7B, 0xA3, 0x56, 0x41, 
	0x1C, 0xC2, 0x39, 0xDD, 0xEE, 0xDD, 0xDE, 0xEB, 0xDE, 0x37, 0x11, 0x75, 0x64, 0x21, 0x65, 0x31, 
	0x7C, 0x97, 0x45, 0x41, 0xA8, 0x89, 0x36, 0x72, 0x22, 0x27, 0x22, 0x27, 0x77, 0x67, 0x11, 0x16, 
	0x54, 0x2A, 0xA1, 0x12, 0x78, 0x92, 0x73, 0x17, 0x9C, 0xC6, 0x17, 0x37, 0x33, 0x37, 0x77, 0x33, 
	0x77, 0x31, 0x11, 0x11, 0x72, 0x1A, 0x9A, 0x22, 0x49, 0xAC, 0x91, 0x74, 0x76, 0x67, 0x23, 0x82, 
	0x28, 0xB1, 0x92, 0x29, 0x71, 0xBA, 0x1A, 0x71, 0xB7, 0x1B, 0x9B, 0xA7, 0x04, 0x79, 0x61, 0x37, 
	0x79, 0xB6, 0x98, 0x8B, 0x78, 0x61, 0xC7, 0x1A, 0x21, 0xBA, 0x1A, 0x71, 0xAA, 0x17, 0xAA, 0x70, 
};
