#include "../include.h"

// format: 8-bit paletted pixel graphics
// image width: 80 pixels
// image height: 46 lines
// image pitch: 80 bytes
const u16 MothImg_Pal[256] __attribute__ ((aligned(4))) = {
	0xF81F, 0x5B6B, 0x53CA, 0x53CA, 0x53CA, 0x53CB, 0x5BEB, 0x5BEB, 0x5BCB, 0x642C, 0x53CA, 0x538A, 0x5BCB, 0x5BEB, 0x5BAB, 0x63EC, 
	0x5BCB, 0x63EC, 0x5B8B, 0x53AA, 0x536A, 0x5BCA, 0x5BEB, 0x4B29, 0x5BCB, 0x3A27, 0x640B, 0x63EC, 0x532A, 0x63CB, 0x744D, 0x42A8, 
	0x63CB, 0x4268, 0x31E6, 0x5329, 0x6C0C, 0x5B6A, 0x7C8E, 0x63AC, 0x42A7, 0x4AC9, 0x29C5, 0x52E9, 0x742C, 0x638B, 0x5B2A, 0x530A, 
	0x4247, 0x844F, 0x634A, 0x2964, 0x7C2E, 0x1903, 0x6BAB, 0x6B8A, 0x4227, 0x2124, 0x6B6A, 0x9D10, 0x52A8, 0x5AE9, 0x9CCF, 0x842E, 
	0xF7BC, 0xFFFD, 0xFFFD, 0xFFFE, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFDD, 0xFFDD, 0xFFFE, 0xFFFE, 0xFFFE, 0xFFDE, 0xFFFF, 0x4A67, 0xFFFD, 
	0xFFDC, 0xA50F, 0xDED9, 0xE73A, 0xEF5B, 0xEF7C, 0xE71A, 0xEF7B, 0xBDF5, 0xFFFD, 0xFFDC, 0xF79C, 0xEF3A, 0xCE37, 0xE6FA, 0xFFFD, 
	0x4206, 0xB594, 0xEF5A, 0xDED8, 0xC616, 0xFFDD, 0xAD33, 0xD698, 0xDEB8, 0xDE98, 0xBDB5, 0xCE57, 0xBDF6, 0x39C5, 0xBDD5, 0xD677, 
	0xB573, 0xFF9B, 0xBDB4, 0xCE36, 0xC5F5, 0xFFBC, 0x41C5, 0xCE15, 0xE6F8, 0xAD32, 0xF75A, 0xA512, 0xB594, 0xD699, 0xDE75, 0xE6B7, 
	0xB552, 0x9CB0, 0x944F, 0xEF19, 0x9490, 0xB553, 0xCE58, 0xC571, 0xA4AE, 0x6B09, 0xACCF, 0xB531, 0xD614, 0xCDD3, 0xC5B3, 0xD656, 
	0xF739, 0xA4F1, 0xB574, 0x9C2C, 0xA48D, 0x940C, 0x7329, 0xC5B2, 0xACF0, 0xBD51, 0x7B8C, 0xAD53, 0x7308, 0x93EC, 0x9C2D, 0x9C6E, 
	0x942D, 0x946F, 0x6B2B, 0xB532, 0xAD11, 0x4A05, 0x8BAB, 0x7B6A, 0x5A87, 0x7B6B, 0x734B, 0x7B6B, 0x4A07, 0x83CC, 0x8C0E, 0x736C, 
	0x840E, 0x9450, 0x5A66, 0x3143, 0x5226, 0x4A06, 0x5A88, 0x62EA, 0x734B, 0x6B0A, 0x8C2F, 0x630B, 0x6AA7, 0x2903, 0x6AC8, 0x5248, 
	0x83CD, 0x7B8D, 0xAD34, 0x49C4, 0x5A25, 0x49E5, 0x3164, 0x5227, 0x62C9, 0x5AA9, 0x3942, 0x5A26, 0x2103, 0x18A2, 0x3185, 0x5268, 
	0x732B, 0x0841, 0x3901, 0x3122, 0x41A5, 0x3943, 0x2902, 0x4184, 0x3922, 0x20C2, 0x3144, 0x4142, 0x20E3, 0x2924, 0x41C6, 0x28C1, 
	0x28E2, 0x28E3, 0x1860, 0x1881, 0x0840, 0x3103, 0x1881, 0x2080, 0x1061, 0x1860, 0x1881, 0x20A2, 0x1840, 0x1040, 0x1040, 0x1040, 
	0x1840, 0x1040, 0x1840, 0x1020, 0x0820, 0x0820, 0x0800, 0x0820, 0x0800, 0x0800, 0x0820, 0x0800, 0x0800, 0x0800, 0x0800, 0x0000, 
};

const u8 MothImg[3680] __attribute__ ((aligned(4))) = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0E, 0x0D, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x2B, 0xEA, 0xCC, 0x23, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x22, 0xE3, 0xAD, 0xBE, 0xE2, 0x0D, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x22, 0xFB, 0xD5, 0xAF, 0xAE, 0xE7, 0x24, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xE6, 0xDD, 0xFF, 0xFE, 0xF0, 0xFB, 0x24, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x14, 0xFF, 0x70, 0x69, 0x6F, 0xDA, 0xF7, 0xE2, 0x24, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x12, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x03, 0xCD, 0xE8, 0xB8, 0x72, 0x56, 0xC6, 0xA4, 0xE0, 0x24, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x03, 0x1C, 0xCC, 0xF3, 0xF5, 0xCE, 0x0E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x1F, 0xFF, 0xFF, 0xFF, 0xE6, 0xDD, 0xA1, 0x56, 0xE3, 0x2D, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x0E, 0x33, 0xFD, 0xD7, 0xCB, 0xBA, 0xE5, 0xBD, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x13, 0x33, 0x17, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x08, 0xF4, 0xAF, 0x84, 0xCD, 0xFF, 0xFF, 0xDD, 0xDD, 0xF5, 0x4E, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x01, 0xD1, 0xF8, 0xFF, 0xEA, 0xD0, 0xB0, 0xA1, 0xE9, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x39, 0xCE, 0xAC, 0x13, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x19, 0xCD, 0x57, 0x52, 0x53, 0x7B, 0xDE, 0xD9, 0xE4, 0x82, 0xDF, 0x16, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 
	0xF6, 0xCD, 0x74, 0xC9, 0xFA, 0xF9, 0xEE, 0xE7, 0xED, 0x1A, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x35, 0xCC, 0xB7, 0x4E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x0E, 0xF6, 0xB0, 0x52, 0x50, 0x63, 0x45, 0x52, 0xC9, 0xD4, 0x5C, 0xBF, 0x2C, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xF4, 
	0xF7, 0xAD, 0x62, 0x6F, 0x57, 0xDA, 0xED, 0xFE, 0xD9, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x1F, 0x60, 0x84, 0xCF, 0x1D, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x21, 0xE8, 0x57, 0x81, 0xC9, 0x88, 0x63, 0x53, 0x81, 0xE4, 0x6F, 0x80, 0x3A, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0xD1, 0xFF, 
	0xFF, 0xF4, 0xDD, 0x78, 0x68, 0xCC, 0xD4, 0xDF, 0xB6, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x04, 0x39, 0x84, 0x82, 0xAC, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x07, 0xF4, 0xAF, 0x7B, 0xF8, 0xFE, 0xD9, 0x52, 0x46, 0x6F, 0xF8, 0xB6, 0xDD, 0xC6, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x23, 0x1F, 0x04, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0xE6, 0xF6, 0xC1, 
	0xC9, 0xFF, 0xFF, 0xCC, 0xE8, 0x81, 0x48, 0xC5, 0x3D, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x39, 0xA2, 0xCE, 0x91, 0x9A, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x29, 0xF9, 0x85, 0xCF, 0xBF, 0xFD, 0xAF, 0x46, 0x45, 0x44, 0xD4, 0xF5, 0xE6, 0x3C, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2A, 0xC8, 0x4E, 0x02, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x33, 0xFF, 0xAF, 0x4F, 
	0x6F, 0x84, 0xDC, 0xFF, 0xFF, 0xAD, 0xC1, 0xF1, 0x3C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x19, 0xAF, 0x79, 0x74, 0xB6, 0x1D, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 
	0xCD, 0xAC, 0xC1, 0x40, 0x48, 0xD4, 0x5E, 0x45, 0x53, 0x61, 0x9A, 0xE0, 0xD5, 0x25, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2A, 0x6D, 0xAC, 0x3A, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x29, 0xFE, 0x6D, 0x50, 0x6F, 
	0x40, 0x54, 0x52, 0xD0, 0xE8, 0xF4, 0xFA, 0xF4, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x23, 0xAF, 0x82, 0x79, 0x91, 0x4E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 
	0xF9, 0x66, 0xB9, 0x42, 0x53, 0xAE, 0x4F, 0x6B, 0x6B, 0x45, 0xBA, 0xEE, 0xEE, 0x1B, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xB0, 0xB0, 0xAC, 0x2E, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0xFF, 0xE8, 0x68, 0x63, 0x74, 
	0x74, 0x68, 0x45, 0x55, 0x9B, 0xF7, 0xB9, 0x6F, 0xDF, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x13, 0x6D, 0x69, 0x84, 0x69, 0xA2, 0x15, 0x00, 0x00, 0x00, 0x00, 0x19, 
	0xCD, 0x40, 0xBF, 0x6C, 0xB1, 0x50, 0x6A, 0x56, 0x42, 0x65, 0xB8, 0xF1, 0xEA, 0x0C, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x14, 0xBF, 0xB7, 0xAE, 0xB8, 0x37, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x39, 0xF9, 0x82, 0x6F, 0xDD, 0xF4, 
	0xEF, 0x89, 0x6F, 0x52, 0x5C, 0xF7, 0xC1, 0x69, 0xE5, 0x1A, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x39, 0x6B, 0x6A, 0x69, 0x74, 0x29, 0x00, 0x00, 0x00, 0x08, 0xFA, 
	0xBB, 0x41, 0x52, 0xCF, 0x64, 0x66, 0x40, 0x45, 0x44, 0x44, 0xC8, 0xF1, 0x76, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x35, 0xC1, 0xCF, 0x73, 0xB7, 0x2D, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1C, 0xF9, 0xCE, 0x6A, 0xAC, 0xDE, 0xFC, 
	0xFE, 0xBF, 0x5B, 0x46, 0x5B, 0xE6, 0xB7, 0x62, 0xDE, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x29, 0x84, 0x68, 0x6A, 0x68, 0xC7, 0x03, 0x00, 0x00, 0x12, 0xF5, 
	0x6A, 0x41, 0x41, 0x67, 0x84, 0x42, 0x42, 0x41, 0x44, 0x5B, 0xD4, 0xE2, 0x32, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0xAF, 0x70, 0x79, 0x79, 0xB5, 
	0x13, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0xFA, 0xFA, 0x72, 0xC9, 0x47, 0x43, 0xC1, 
	0xDC, 0x5C, 0x46, 0x45, 0x44, 0xCF, 0xEF, 0xEF, 0xF5, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x17, 0xCF, 0x63, 0x9B, 0xBA, 0x79, 0x23, 0x00, 0x00, 0x1F, 0xE6, 
	0x40, 0x41, 0x43, 0x92, 0x5B, 0x41, 0x41, 0x46, 0x44, 0x5A, 0xE0, 0xF1, 0x0D, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x14, 0x60, 0x72, 0x81, 0x72, 0x70, 
	0x4E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x19, 0xFC, 0xBB, 0x6A, 0xB0, 0x42, 0x41, 0xAF, 
	0x64, 0x45, 0x44, 0x5D, 0x58, 0xB8, 0xEA, 0xDA, 0xB5, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x0A, 0xCD, 0x64, 0x7B, 0x6F, 0x68, 0x29, 0x00, 0x00, 0x35, 0xCF, 
	0x41, 0x43, 0x4A, 0x7B, 0x41, 0x41, 0x43, 0x46, 0x73, 0xA1, 0xF1, 0x6D, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x33, 0x6E, 0x6B, 0x6E, 0x68, 
	0x9A, 0x14, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0E, 0xF6, 0xE8, 0x53, 0x55, 0xCE, 0x6A, 0x84, 0x6B, 
	0x5A, 0x64, 0x58, 0x5B, 0x45, 0xAD, 0xE2, 0xEA, 0x25, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2A, 0xCF, 0xC0, 0x61, 0x73, 0x3F, 0x00, 0x0D, 0xFD, 0xB1, 
	0x43, 0x49, 0x4D, 0x66, 0x43, 0x52, 0x7B, 0x79, 0x5E, 0xA4, 0xEC, 0x25, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x14, 0xB7, 0x68, 0x61, 0x68, 
	0xA4, 0x4E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x21, 0xF9, 0xC1, 0x41, 0x41, 0x5E, 0xC9, 0x6B, 0x6A, 
	0x6A, 0x50, 0x45, 0x44, 0x5A, 0xDE, 0xF1, 0xEB, 0x0D, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x17, 0xAC, 0x68, 0x73, 0x84, 0x82, 0x25, 0x23, 0xFC, 0x6B, 
	0x43, 0x4A, 0x86, 0xBA, 0x7B, 0x5D, 0x47, 0x45, 0x65, 0xAA, 0xCC, 0x03, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xDC, 0x64, 0x6F, 0x82, 
	0x6E, 0xA4, 0x23, 0x00, 0x00, 0x00, 0x08, 0xEF, 0xE8, 0x5C, 0x41, 0x41, 0x43, 0x66, 0x7B, 0x40, 
	0x42, 0x45, 0x45, 0x42, 0x62, 0xEA, 0xE2, 0x2B, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xCD, 0x77, 0x68, 0x72, 0x9A, 0xCF, 0x6D, 0xF5, 0x5C, 
	0x49, 0x55, 0xAF, 0x41, 0x49, 0x49, 0x46, 0x40, 0x74, 0xEB, 0x12, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x19, 0xBF, 0x73, 0xB1, 
	0x69, 0x74, 0x36, 0x00, 0x00, 0x00, 0x01, 0xF8, 0xBB, 0x41, 0x41, 0x49, 0x4A, 0x82, 0x42, 0x41, 
	0x41, 0x41, 0x44, 0x5A, 0x91, 0xE2, 0xDF, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x22, 0x9A, 0x69, 0x70, 0xAA, 0xB8, 0xEB, 0xDD, 0xC1, 
	0xC1, 0x92, 0x92, 0x57, 0x49, 0x4A, 0x67, 0x6F, 0x81, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0A, 0xD9, 0xC0, 0x61, 
	0x9B, 0x79, 0x3F, 0x25, 0x03, 0x00, 0x38, 0xF9, 0x64, 0x41, 0x43, 0x4A, 0x7D, 0x6E, 0x41, 0x43, 
	0x43, 0x41, 0x5B, 0x73, 0xC7, 0xED, 0x2E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0B, 0xE6, 0xA3, 0x80, 0xA9, 0x72, 0xC6, 0xC8, 0x43, 
	0x40, 0x49, 0x54, 0xB0, 0x53, 0x6C, 0x62, 0x70, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x28, 0xCF, 0x68, 
	0x68, 0x9B, 0xB8, 0xB6, 0xA2, 0x23, 0xF9, 0xE1, 0x46, 0x43, 0x4A, 0x4D, 0xB1, 0x67, 0x7C, 0x85, 
	0x85, 0x70, 0x64, 0x8F, 0xF2, 0xCE, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x39, 0xAD, 0xB8, 0xA6, 0xA1, 0xDC, 0xC0, 0x59, 
	0x59, 0x4B, 0x4A, 0xC2, 0x64, 0x62, 0xC1, 0xC9, 0xAE, 0xDD, 0x2E, 0x0D, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x35, 0x79, 
	0x68, 0x80, 0xA9, 0x82, 0xBF, 0xEB, 0xFC, 0xDE, 0x5E, 0x49, 0x4C, 0xC2, 0x84, 0x5E, 0x48, 0x43, 
	0x41, 0x45, 0x5A, 0xAB, 0xEA, 0x0E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x28, 0xB6, 0x8E, 0xA6, 0xB7, 0xFA, 0x81, 0x65, 
	0x5F, 0x4B, 0x5D, 0x73, 0x8F, 0xAC, 0xEB, 0xD0, 0xC1, 0xC8, 0xAE, 0xD4, 0x11, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x17, 0xDC, 
	0xA4, 0x80, 0xAD, 0xA1, 0x73, 0xA2, 0xFC, 0x7B, 0x84, 0xB0, 0x7C, 0x55, 0x91, 0x43, 0x49, 0x49, 
	0x54, 0x69, 0x79, 0xC6, 0x0E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0A, 0xBD, 0x8E, 0x9E, 0xE1, 0xFC, 0xC8, 0x83, 
	0x65, 0x64, 0x8E, 0x8E, 0xDD, 0x72, 0x6B, 0xE5, 0xEF, 0x9A, 0x63, 0xB5, 0xC6, 0x07, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x33, 
	0x9A, 0xAD, 0x9F, 0xBF, 0x77, 0xAC, 0xFA, 0x57, 0x41, 0x42, 0x4B, 0x4A, 0xB1, 0x86, 0x86, 0x6F, 
	0x78, 0x61, 0x20, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x28, 0xA9, 0x9F, 0xD6, 0xF5, 0x69, 0xAD, 
	0xA4, 0x99, 0x99, 0xD9, 0x81, 0x4F, 0x5C, 0x69, 0xC0, 0xD6, 0xEF, 0x9A, 0x9A, 0x2E, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0B, 
	0xCC, 0x8D, 0x9F, 0xB3, 0x8F, 0xE6, 0xDD, 0x4F, 0x4F, 0x59, 0x4A, 0x4B, 0x6C, 0x72, 0x7A, 0x79, 
	0xC7, 0x34, 0x3D, 0x2F, 0x0D, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0B, 0xBD, 0x88, 0xD7, 0xF3, 0x7A, 0x62, 
	0xA0, 0x97, 0xBD, 0xBF, 0x5A, 0x5A, 0x6F, 0x5A, 0x5B, 0x62, 0xEA, 0x8B, 0x8C, 0x6D, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x29, 0xC8, 0x88, 0xB4, 0xAD, 0xF9, 0xD4, 0x70, 0x75, 0x5F, 0x5E, 0x79, 0x7F, 0x91, 0xAC, 0xD0, 
	0xEB, 0xC0, 0xD4, 0x84, 0xB6, 0x2D, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2A, 0xA7, 0xD4, 0xEA, 0x78, 0x8D, 
	0x8A, 0xB5, 0xE0, 0x78, 0x75, 0x73, 0x71, 0x75, 0x75, 0x7A, 0xC7, 0xCD, 0xE8, 0x76, 0x22, 0x10, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x0A, 0x33, 0x9F, 0xBE, 0xE1, 0xFC, 0x84, 0x74, 0xBA, 0x79, 0x99, 0x97, 0xC7, 0xB5, 0x56, 0x4F, 
	0x79, 0xCF, 0xEB, 0xB0, 0xB7, 0xDA, 0x27, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0B, 0xDC, 0xA5, 0xD9, 0x7E, 0xA0, 
	0xA6, 0xED, 0x91, 0x71, 0x83, 0x77, 0x78, 0x80, 0x8A, 0x88, 0x98, 0xAD, 0xE4, 0x9E, 0x96, 0x21, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x0E, 0xB3, 0x89, 0xD3, 0xF3, 0x80, 0x90, 0x80, 0x87, 0x9F, 0xEB, 0xB6, 0x5B, 0x65, 0x6F, 
	0x5B, 0x50, 0x6F, 0xCE, 0xAB, 0x7E, 0x6D, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x28, 0xA5, 0xEB, 0x97, 0x96, 
	0xDF, 0xD4, 0x90, 0x90, 0xA1, 0x88, 0x9F, 0x87, 0x8D, 0x8C, 0x8C, 0x8D, 0xAC, 0xB3, 0xB6, 0x1F, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0xC5, 0xC5, 0xF5, 0x8E, 0x7E, 0xAD, 0xA6, 0xEE, 0x89, 0x71, 0x75, 0x64, 0x7A, 
	0x71, 0x71, 0x78, 0x89, 0xB3, 0xC6, 0x60, 0x1F, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0D, 0x0F, 0xD5, 0xEC, 0x93, 0xC4, 
	0xE7, 0x8D, 0xA0, 0x98, 0x97, 0x8D, 0x7E, 0x8E, 0xA3, 0x98, 0x8A, 0x8A, 0xA8, 0xF6, 0xE4, 0x2B, 
	0x2F, 0x4E, 0x60, 0x2F, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x0D, 0x12, 0xE5, 0xFC, 0x88, 0x9E, 0xBE, 0xF0, 0xB6, 0x90, 0x90, 0xA4, 0x8B, 0x8B, 
	0x8A, 0x88, 0x99, 0x8C, 0x8A, 0xCD, 0xAA, 0x76, 0x38, 0x4E, 0x60, 0x2F, 0x0C, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x20, 0xDB, 0xD5, 0xD3, 0xDB, 
	0xBC, 0x94, 0x98, 0x8B, 0xA0, 0xA7, 0x9C, 0xA6, 0x93, 0x8A, 0x99, 0x98, 0xD6, 0xEF, 0xE2, 0xE9, 
	0xE7, 0xE9, 0xEC, 0xF3, 0x6D, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x05, 0x20, 0xDB, 0xEC, 0x9C, 0xB2, 0xD8, 0xA8, 0x8D, 0xA1, 0x8B, 0x8D, 0x8C, 0x8E, 
	0x99, 0x99, 0x8B, 0x8B, 0x8B, 0xB3, 0xBD, 0xEB, 0xE7, 0xE9, 0xEC, 0xF3, 0x6D, 0x0D, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x32, 0xE5, 0xB4, 0xD7, 0xB2, 
	0xCA, 0xC3, 0xB2, 0xE7, 0xDF, 0xCA, 0xBC, 0x9D, 0x95, 0x9E, 0x96, 0xE0, 0xE9, 0xE3, 0xE7, 0xE3, 
	0x76, 0x60, 0x60, 0x30, 0x1C, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x06, 0x32, 0xE5, 0xB4, 0xD7, 0xC4, 0xD2, 0x9C, 0x9C, 0xA6, 0xBC, 0xC4, 0xC4, 0xA6, 
	0x9D, 0x94, 0x88, 0x9E, 0xA8, 0xE2, 0xE3, 0xE3, 0x76, 0x60, 0x60, 0x30, 0x1C, 0x0C, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x09, 0x31, 0x77, 0x8D, 0x8A, 
	0xB2, 0xCA, 0xBC, 0xD8, 0xB4, 0xB4, 0xD7, 0xDF, 0xDF, 0xBF, 0x2E, 0x1C, 0x29, 0x21, 0x22, 0x22, 
	0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x09, 0x31, 0x77, 0x8D, 0x8A, 0xB2, 0xCA, 0xBC, 0xCA, 0xB5, 0xCB, 0xD5, 0xDF, 
	0xD7, 0xB6, 0x4E, 0x2B, 0x29, 0x21, 0x22, 0x22, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x1E, 0x26, 0x3B, 
	0x51, 0x9D, 0x93, 0x94, 0xBC, 0xA7, 0x9C, 0x9D, 0x3E, 0x1E, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x03, 0x1E, 0x26, 0x3B, 0x51, 0x9D, 0x93, 0x94, 0xBC, 0xA7, 0x9C, 0x9D, 
	0x3E, 0x1E, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0C, 
	0x4E, 0x32, 0x89, 0x4E, 0x2C, 0x06, 0x1E, 0x2D, 0x3C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x4E, 0x32, 0x89, 0x4E, 0x2C, 0x06, 0x1E, 0x2D, 
	0x3C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 
	0x37, 0x00, 0x2E, 0x1A, 0x00, 0x00, 0x00, 0x15, 0x2F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x37, 0x00, 0x2E, 0x1A, 0x00, 0x00, 0x00, 0x15, 
	0x2F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x32, 0x00, 0x11, 0x2C, 0x00, 0x00, 0x00, 0x2C, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x32, 0x00, 0x11, 0x2C, 0x00, 0x00, 0x00, 0x2C, 
	0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x27, 0x00, 0x02, 0x2C, 0x00, 0x00, 0x00, 0x2C, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x27, 0x00, 0x02, 0x2C, 0x00, 0x00, 0x00, 0x2C, 
	0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x1B, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1B, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00, 0x24, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x11, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x0F, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};
