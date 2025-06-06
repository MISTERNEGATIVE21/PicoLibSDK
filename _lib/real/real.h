
// ****************************************************************************
//                                 
//                     Real numbers - all format headers
//
// ****************************************************************************
// PicoLibSDK - Alternative SDK library for Raspberry Pico and RP2040
// Copyright (c) 2023 Miroslav Nemecek, Panda38@seznam.cz, hardyplotter2@gmail.com
// 	https://github.com/Panda381/PicoLibSDK
//	https://www.breatharian.eu/hw/picolibsdk/index_en.html
//	https://github.com/pajenicko/picopad
//	https://picopad.eu/en/
// License:
//	This source code is freely available for any purpose, including commercial.
//	It is possible to take and modify the code or parts of it, without restriction.

// IEEE754 number formats: https://en.wikipedia.org/wiki/IEEE_754
//  Zero: exponent = 0 (sign can be + or -)
//  Infinity: exponent = max. value (sign can be + or -)
//  Base segment can be u16 or u32.
//  Exponent can be max. 30 bits and must be less than bits of segment.

// === REAL numbers definition

#if USE_REAL16
// real16 (half-precision), size 2 bytes, 16 bits, mantissa 10 bits, precision 3.31 digits (extended 4.82 digits), exponent range +-4.52, exponent bias 15
#define REAL			real16		// number type
#define REALEXT			real16ext	// extended number type
#define BASE_BITS		16		// number of bits of base entry
#define BASE_NUM		1		// number of base entries
#define EXP_BITS		5		// number of exponent bits
#define CHEB_LN			7		// number of Chebyshev coefficients for Ln()
#define CHEB_EXP		7		// number of Chebyshev coefficients for Exp()
#define CHEB_SIN		9		// number of Chebyshev coefficients for Sin()
#define CHEB_ASIN		8		// number of Chebyshev coefficients for ASin()
#define CHEB_ATAN		6		// number of Chebyshev coefficients for ATan()
#define CHEB_SQRT		8		// number of Chebyshev coefficients for Sqrt()
#define FACT_MAX		8		// max. integer factorial
#define REALNAME(x)		Real16 ## x 	// name of functions
#define REAL_CONST		"const/const0016.h"
#if USE_REAL48
#define REALREF			real48		// reference number type (do not use real32, insufficient for ChebCoefRefExt)
#define REALREFNAME(x)	Real48 ## x		// name of reference functions
#endif
#ifdef REAL_PATH
#include REAL_PATH				// "./real_h.h" or "./real_cpp.h"
#endif
#endif // USE_REAL16

#if USE_REAL32
// real32 (float, single-precision), size 4 bytes, 32 bits, mantissa 23 bits, precision 7.22 digits (extended 9.63 digits), exponent range +-38.23, exponent bias 127
#define REAL			real32		// number type
#define REALEXT			real32ext	// extended number type
#define BASE_BITS		32		// number of bits of base entry
#define BASE_NUM		1		// number of base entries
#define EXP_BITS		8		// number of exponent bits
#define CHEB_LN			13		// number of Chebyshev coefficients for Ln()
#define CHEB_EXP		10		// number of Chebyshev coefficients for Exp()
#define CHEB_SIN		13		// number of Chebyshev coefficients for Sin()
#define CHEB_ASIN		20		// number of Chebyshev coefficients for ASin()
#define CHEB_ATAN		14		// number of Chebyshev coefficients for ATan()
#define CHEB_SQRT		20		// number of Chebyshev coefficients for Sqrt()
#define FACT_MAX		34		// max. integer factorial
#define REALNAME(x)		Real32 ## x	// name of functions
#define REAL_CONST		"const/const0032.h"
#if USE_REAL64
#define REALREF			real64		// reference number type (do not use real48, insufficient for ChebCoefRefExt)
#define REALREFNAME(x)	Real64 ## x		// name of reference functions
#endif
#ifdef REAL_PATH
#include REAL_PATH				// "./real_h.h" or "./real_cpp.h"
#endif
#endif // USE_REAL32

#if USE_REAL48
// real48, size 6 bytes, 48 bits, mantissa 37 bits, precision 11.44 digits (extended 14.45 digits), exponent range +-153.83, exponent bias 511
#define REAL			real48		// number type
#define REALEXT			real48ext	// extended number type
#define BASE_BITS		16		// number of bits of base entry
#define BASE_NUM		3		// number of base entries
#define EXP_BITS		10		// number of exponent bits
#define CHEB_LN			19		// number of Chebyshev coefficients for Ln()
#define CHEB_EXP		15		// number of Chebyshev coefficients for Exp()
#define CHEB_SIN		14		// number of Chebyshev coefficients for Sin()
#define CHEB_ASIN		27		// number of Chebyshev coefficients for ASin()
#define CHEB_ATAN		19		// number of Chebyshev coefficients for ATan()
#define CHEB_SQRT		26		// number of Chebyshev coefficients for Sqrt()
#define FACT_MAX		98		// max. integer factorial
#define REALNAME(x)		Real48 ## x	// name of functions
#define REAL_CONST		"const/const0048.h"
#if USE_REAL96
#define REALREF			real96		// reference number type (do not use real80 or real64, insufficient for ChebCoefRefExt)
#define REALREFNAME(x)	Real96 ## x		// name of reference functions
#endif
#ifdef REAL_PATH
#include REAL_PATH				// "./real_h.h" or "./real_cpp.h"
#endif
#endif // USE_REAL48

#if USE_REAL64
// real64 (double-precision), size 8 bytes, 64 bits, mantissa 52 bits, precision 15.95 digits (extended 19.27 digits), exponent range +-307.95, exponent bias 1023
#define REAL			real64		// number type
#define REALEXT			real64ext	// extended number type
#define BASE_BITS		32		// number of bits of base entry
#define BASE_NUM		2		// number of base entries
#define EXP_BITS		11		// number of exponent bits
#define CHEB_LN			27		// number of Chebyshev coefficients for Ln()
#define CHEB_EXP		17		// number of Chebyshev coefficients for Exp()
#define CHEB_SIN		16		// number of Chebyshev coefficients for Sin()
#define CHEB_ASIN		38		// number of Chebyshev coefficients for ASin()
#define CHEB_ATAN		24		// number of Chebyshev coefficients for ATan()
#define CHEB_SQRT		38		// number of Chebyshev coefficients for Sqrt()
#define FACT_MAX		170		// max. integer factorial
#define REALNAME(x)		Real64 ## x	// name of functions
#define REAL_CONST		"const/const0064.h"
#if USE_REAL128
#define REALREF			real128		// reference number type (do not use real80 or real96, insufficient for ChebCoefRefExt)
#define REALREFNAME(x)	Real128 ## x		// name of reference functions
#endif
#ifdef REAL_PATH
#include REAL_PATH				// "./real_h.h" or "./real_cpp.h"
#endif
#endif // USE_REAL64

#if USE_REAL80
// real80 (extended precision), size 10 bytes, 80 bits, mantissa 64 bits, precision 19.57 digits (extended 24.08 digits), exponent range +-4931.77, exponent bias 16383
#define REAL			real80		// number type
#define REALEXT			real80ext	// extended number type
#define BASE_BITS		16		// number of bits of base entry
#define BASE_NUM		5		// number of base entries
#define EXP_BITS		15		// number of exponent bits
#define CHEB_LN			33		// number of Chebyshev coefficients for Ln()
#define CHEB_EXP		19		// number of Chebyshev coefficients for Exp()
#define CHEB_SIN		20		// number of Chebyshev coefficients for Sin()
#define CHEB_ASIN		47		// number of Chebyshev coefficients for ASin()
#define CHEB_ATAN		32		// number of Chebyshev coefficients for ATan()
#define CHEB_SQRT		48		// number of Chebyshev coefficients for Sqrt()
#define FACT_MAX		1754		// max. integer factorial
#define REALNAME(x)		Real80 ## x	// name of functions
#define REAL_CONST		"const/const0080.h"
#if USE_REAL160
#define REALREF			real160		// reference number type (do not use less than real160, insufficient exponent bits)
#define REALREFNAME(x)	Real160 ## x		// name of reference functions
#endif
#ifdef REAL_PATH
#include REAL_PATH				// "./real_h.h" or "./real_cpp.h"
#endif
#endif // USE_REAL80

#if USE_REAL96
// real96, size 12 bytes, 96 bits, mantissa 82 bits, precision 24.99 digits (extended 28.90 digits), exponent range +-1232.72, exponent bias 4095
#define REAL			real96		// number type
#define REALEXT			real96ext	// extended number type
#define BASE_BITS		32		// number of bits of base entry
#define BASE_NUM		3		// number of base entries
#define EXP_BITS		13		// number of exponent bits
#define CHEB_LN			39		// number of Chebyshev coefficients for Ln()
#define CHEB_EXP		23		// number of Chebyshev coefficients for Exp()
#define CHEB_SIN		22		// number of Chebyshev coefficients for Sin()
#define CHEB_ASIN		59		// number of Chebyshev coefficients for ASin()
#define CHEB_ATAN		39		// number of Chebyshev coefficients for ATan()
#define CHEB_SQRT		55		// number of Chebyshev coefficients for Sqrt()
#define FACT_MAX		536		// max. integer factorial
#define REALNAME(x)		Real96 ## x	// name of functions
#define REAL_CONST		"const/const0096.h"
#if USE_REAL160
#define REALREF			real160		// reference number type (do not use real128, insufficient for ChebCoefRefExt)
#define REALREFNAME(x)	Real160 ## x		// name of reference functions
#endif
#ifdef REAL_PATH
#include REAL_PATH				// "./real_h.h" or "./real_cpp.h"
#endif
#endif // USE_REAL96

#if USE_REAL128
// real128 (quadruple-precision), size 16 bytes, 128 bits, mantissa 112 bits, precision 34.02 digits (extended 38.53 digits), exponent range +-4931.77, exponent bias 16383
#define REAL			real128		// number type
#define REALEXT			real128ext	// extended number type
#define BASE_BITS		32		// number of bits of base entry
#define BASE_NUM		4		// number of base entries
#define EXP_BITS		15		// number of exponent bits
#define CHEB_LN			51		// number of Chebyshev coefficients for Ln()
#define CHEB_EXP		29		// number of Chebyshev coefficients for Exp()
#define CHEB_SIN		28		// number of Chebyshev coefficients for Sin()
#define CHEB_ASIN		76		// number of Chebyshev coefficients for ASin()
#define CHEB_ATAN		50		// number of Chebyshev coefficients for ATan()
#define CHEB_SQRT		76		// number of Chebyshev coefficients for Sqrt()
#define FACT_MAX		1754		// max. integer factorial
#define REALNAME(x)		Real128 ## x	// name of functions
#define REAL_CONST		"const/const0128.h"
#if USE_REAL192
#define REALREF			real192		// reference number type (do not use real160, insufficient for ChebCoefRefExt)
#define REALREFNAME(x)	Real192 ## x		// name of reference functions
#endif
#ifdef REAL_PATH
#include REAL_PATH				// "./real_h.h" or "./real_cpp.h"
#endif
#endif // USE_REAL128

#if USE_REAL160
// real160, size 20 bytes, 160 bits, mantissa 143 bits, precision 43.35 digits (extended 48.16 digits), exponent range +-9863.85, exponent bias 32767
#define REAL			real160		// number type
#define REALEXT			real160ext	// extended number type
#define BASE_BITS		32		// number of bits of base entry
#define BASE_NUM		5		// number of base entries
#define EXP_BITS		16		// number of exponent bits
#define CHEB_LN			62		// number of Chebyshev coefficients for Ln()
#define CHEB_EXP		32		// number of Chebyshev coefficients for Exp()
#define CHEB_SIN		33		// number of Chebyshev coefficients for Sin()
#define CHEB_ASIN		96		// number of Chebyshev coefficients for ASin()
#define CHEB_ATAN		62		// number of Chebyshev coefficients for ATan()
#define CHEB_SQRT		96		// number of Chebyshev coefficients for Sqrt()
#define FACT_MAX		3210		// max. integer factorial
#define REALNAME(x)		Real160 ## x	// name of functions
#define REAL_CONST		"const/const0160.h"
#if USE_REAL256
#define REALREF			real256		// reference number type (do not use real192, insufficient for ChebCoefRefExt)
#define REALREFNAME(x)	Real256 ## x		// name of reference functions
#endif
#ifdef REAL_PATH
#include REAL_PATH				// "./real_h.h" or "./real_cpp.h"
#endif
#endif // USE_REAL160

#if USE_REAL192
// real192, size 24 bytes, 192 bits, mantissa 174 bits, precision 52.68 digits (extended 57.80 digits), exponent range +-19728.00, exponent bias 65535
#define REAL			real192		// number type
#define REALEXT			real192ext	// extended number type
#define BASE_BITS		32		// number of bits of base entry
#define BASE_NUM		6		// number of base entries
#define EXP_BITS		17		// number of exponent bits
#define CHEB_LN			75		// number of Chebyshev coefficients for Ln()
#define CHEB_EXP		37		// number of Chebyshev coefficients for Exp()
#define CHEB_SIN		38		// number of Chebyshev coefficients for Sin()
#define CHEB_ASIN		118		// number of Chebyshev coefficients for ASin()
#define CHEB_ATAN		73		// number of Chebyshev coefficients for ATan()
#define CHEB_SQRT		116		// number of Chebyshev coefficients for Sqrt()
#define FACT_MAX		5910		// max. integer factorial
#define REALNAME(x)		Real192 ## x	// name of functions
#define REAL_CONST		"const/const0192.h"
#if USE_REAL256
#define REALREF			real256		// reference number type
#define REALREFNAME(x)	Real256 ## x		// name of reference functions
#endif
#ifdef REAL_PATH
#include REAL_PATH				// "./real_h.h" or "./real_cpp.h"
#endif
#endif // USE_REAL192

#if USE_REAL256
// real256 (octuple precision), size 32 bytes, 256 bits, mantissa 236 bits, precision 71.34 digits (extended 77.06 digits), exponent range +-78912.91, exponent bias 262143
#define REAL			real256		// number type
#define REALEXT			real256ext	// extended number type
#define BASE_BITS		32		// number of bits of base entry
#define BASE_NUM		8		// number of base entries
#define EXP_BITS		19		// number of exponent bits
#define CHEB_LN			100		// number of Chebyshev coefficients for Ln()
#define CHEB_EXP		46		// number of Chebyshev coefficients for Exp()
#define CHEB_SIN		47		// number of Chebyshev coefficients for Sin()
#define CHEB_ASIN		157		// number of Chebyshev coefficients for ASin()
#define CHEB_ATAN		100		// number of Chebyshev coefficients for ATan()
#define CHEB_SQRT		155		// number of Chebyshev coefficients for Sqrt()
#define FACT_MAX		20366		// max. integer factorial
#define REALNAME(x)		Real256 ## x	// name of functions
#define REAL_CONST		"const/const0256.h"
#if USE_REAL384
#define REALREF			real384		// reference number type
#define REALREFNAME(x)	Real384 ## x		// name of reference functions
#endif
#ifdef REAL_PATH
#include REAL_PATH				// "./real_h.h" or "./real_cpp.h"
#endif
#endif // USE_REAL256

#if USE_REAL384
// real384, size 48 bytes, 384 bits, mantissa 362 bits, precision 109.27 digits (extended 115.60 digits), exponent range +-315652.53, exponent bias 1048575
#define REAL			real384		// number type
#define REALEXT			real384ext	// extended number type
#define BASE_BITS		32		// number of bits of base entry
#define BASE_NUM		12		// number of base entries
#define EXP_BITS		21		// number of exponent bits
#define CHEB_LN			151		// number of Chebyshev coefficients for Ln()
#define CHEB_EXP		63		// number of Chebyshev coefficients for Exp()
#define CHEB_SIN		65		// number of Chebyshev coefficients for Sin()
#define CHEB_ASIN		237		// number of Chebyshev coefficients for ASin()
#define CHEB_ATAN		150		// number of Chebyshev coefficients for ATan()
#define CHEB_SQRT		237		// number of Chebyshev coefficients for Sqrt()
#define FACT_MAX		71421		// max. integer factorial
#define REALNAME(x)		Real384 ## x	// name of functions
#define REAL_CONST		"const/const0384.h"
#if USE_REAL512
#define REALREF			real512		// reference number type
#define REALREFNAME(x)	Real512 ## x		// name of reference functions
#endif
#ifdef REAL_PATH
#include REAL_PATH				// "./real_h.h" or "./real_cpp.h"
#endif
#endif // USE_REAL384

#if USE_REAL512
// real512, size 64 bytes, 512 bits, mantissa 488 bits, precision 147.20 digits (extended 154.13 digits), exponent range +-1262611.01, exponent bias 4194303
#define REAL			real512		// number type
#define REALEXT			real512ext	// extended number type
#define BASE_BITS		32		// number of bits of base entry
#define BASE_NUM		16		// number of base entries
#define EXP_BITS		23		// number of exponent bits
#define CHEB_LN			200		// number of Chebyshev coefficients for Ln()
#define CHEB_EXP		81		// number of Chebyshev coefficients for Exp()
#define CHEB_SIN		83		// number of Chebyshev coefficients for Sin()
#define CHEB_ASIN		317		// number of Chebyshev coefficients for ASin()
#define CHEB_ATAN		199		// number of Chebyshev coefficients for ATan()
#define CHEB_SQRT		316		// number of Chebyshev coefficients for Sqrt()
#define FACT_MAX		254016		// max. integer factorial
#define REALNAME(x)		Real512 ## x	// name of functions
#define REAL_CONST		"const/const0512.h"
#if USE_REAL768
#define REALREF			real768		// reference number type
#define REALREFNAME(x)	Real768 ## x		// name of reference functions
#endif
#ifdef REAL_PATH
#include REAL_PATH				// "./real_h.h" or "./real_cpp.h"
#endif
#endif // USE_REAL512

#if USE_REAL768
// real768, size 96 bytes, 768 bits, mantissa 742 bits, precision 223.67 digits (extended 231.19 digits), exponent range +-5050444.96, exponent bias 16777215
#define REAL			real768		// number type
#define REALEXT			real768ext	// extended number type
#define BASE_BITS		32		// number of bits of base entry
#define BASE_NUM		24		// number of base entries
#define EXP_BITS		25		// number of exponent bits
#define CHEB_LN			301		// number of Chebyshev coefficients for Ln()
#define CHEB_EXP		112		// number of Chebyshev coefficients for Exp()
#define CHEB_SIN		116		// number of Chebyshev coefficients for Sin()
#define CHEB_ASIN		478		// number of Chebyshev coefficients for ASin()
#define CHEB_ATAN		300		// number of Chebyshev coefficients for ATan()
#define CHEB_SQRT		476		// number of Chebyshev coefficients for Sqrt()
#define FACT_MAX		913846		// max. integer factorial
#define REALNAME(x)		Real768 ## x	// name of functions
#define REAL_CONST		"const/const0768.h"
#if USE_REAL1024
#define REALREF			real1024	// reference number type
#define REALREFNAME(x)	Real1024 ## x		// name of reference functions
#endif
#ifdef REAL_PATH
#include REAL_PATH				// "./real_h.h" or "./real_cpp.h"
#endif
#endif // USE_REAL768

#if USE_REAL1024
// real1024, size 128 bytes, 1024 bits, mantissa 996 bits, precision 300.13 digits (extended 308.25 digits), exponent range +-20201780.74, exponent bias 67108863
#define REAL			real1024	// number type
#define REALEXT			real1024ext	// extended number type
#define BASE_BITS		32		// number of bits of base entry
#define BASE_NUM		32		// number of base entries
#define EXP_BITS		27		// number of exponent bits
#define CHEB_LN			402		// number of Chebyshev coefficients for Ln()
#define CHEB_EXP		142		// number of Chebyshev coefficients for Exp()
#define CHEB_SIN		147		// number of Chebyshev coefficients for Sin()
#define CHEB_ASIN		639		// number of Chebyshev coefficients for ASin()
#define CHEB_ATAN		401		// number of Chebyshev coefficients for ATan()
#define CHEB_SQRT		639		// number of Chebyshev coefficients for Sqrt()
#define FACT_MAX		3318996		// max. integer factorial
#define REALNAME(x)		Real1024 ## x	// name of functions
#define REAL_CONST		"const/const1024.h"
#if USE_REAL1536
#define REALREF			real1536	// reference number type
#define REALREFNAME(x)	Real1536 ## x		// name of reference functions
#endif
#ifdef REAL_PATH
#include REAL_PATH				// "./real_h.h" or "./real_cpp.h"
#endif
#endif // USE_REAL1024

#if USE_REAL1536
// real1536, size 192 bytes, 1536 bits, mantissa 1505 bits, precision 453.35 digits (extended 462.38 digits), exponent range +-161614248.01, exponent bias 536870911
#define REAL			real1536	// number type
#define REALEXT			real1536ext	// extended number type
#define BASE_BITS		32		// number of bits of base entry
#define BASE_NUM		48		// number of base entries
#define EXP_BITS		30		// number of exponent bits
#define CHEB_LN			602		// number of Chebyshev coefficients for Ln()
#define CHEB_EXP		200		// number of Chebyshev coefficients for Exp()
#define CHEB_SIN		204		// number of Chebyshev coefficients for Sin()
#define CHEB_ASIN		961		// number of Chebyshev coefficients for ASin()
#define CHEB_ATAN		602		// number of Chebyshev coefficients for ATan()
#define CHEB_SQRT		961		// number of Chebyshev coefficients for Sqrt()
#define FACT_MAX		23310032	// max. integer factorial
#define REALNAME(x)		Real1536 ## x	// name of functions
#define REAL_CONST		"const/const1536.h"
#if USE_REAL2048
#define REALREF			real2048	// reference number type
#define REALREFNAME(x)	Real2048 ## x		// name of reference functions
#endif
#ifdef REAL_PATH
#include REAL_PATH				// "./real_h.h" or "./real_cpp.h"
#endif
#endif // USE_REAL1536

#if USE_REAL2048
// real2048, size 256 bytes, 2048 bits, mantissa 2017 bits, precision 607.48 digits (extended 616.51 digits), exponent range +-161614248.01, exponent bias 536870911
#define REAL			real2048	// number type
#define REALEXT			real2048ext	// extended number type
#define BASE_BITS		32		// number of bits of base entry
#define BASE_NUM		64		// number of base entries
#define EXP_BITS		30		// number of exponent bits (max. 30)
#define CHEB_LN			805		// number of Chebyshev coefficients for Ln()
#define CHEB_EXP		254		// number of Chebyshev coefficients for Exp()
#define CHEB_SIN		259		// number of Chebyshev coefficients for Sin()
#define CHEB_ASIN		1284		// number of Chebyshev coefficients for ASin()
#define CHEB_ATAN		803		// number of Chebyshev coefficients for ATan()
#define CHEB_SQRT		1283		// number of Chebyshev coefficients for Sqrt()
#define FACT_MAX		23310032	// max. integer factorial
#define REALNAME(x)		Real2048 ## x	// name of functions
#define REAL_CONST		"const/const2048.h"
#if USE_REAL3072
#define REALREF			real3072	// reference number type
#define REALREFNAME(x)	Real3072 ## x		// name of reference functions
#endif
#ifdef REAL_PATH
#include REAL_PATH				// "./real_h.h" or "./real_cpp.h"
#endif
#endif // USE_REAL2048

#if USE_REAL3072
// real3072, size 384 bytes, 3072 bits, mantissa 3041 bits, precision 915.73 digits (extended 924.76 digits), exponent range +-161614248.01, exponent bias 536870911
#define REAL			real3072	// number type
#define REALEXT			real3072ext	// extended number type
#define BASE_BITS		32		// number of bits of base entry
#define BASE_NUM		96		// number of base entries
#define EXP_BITS		30		// number of exponent bits (max. 30)
#define FACT_MAX		23310032	// max. integer factorial
#define REALNAME(x)		Real3072 ## x	// name of functions
#define REAL_CONST		"const/const3072.h"
#if USE_REAL4096
#define REALREF			real4096	// reference number type
#define REALREFNAME(x)	Real4096 ## x		// name of reference functions
#endif
#ifdef REAL_PATH
#include REAL_PATH				// "./real_h.h" or "./real_cpp.h"
#endif
#endif // USE_REAL3072

#if USE_REAL4096
// real4096, size 512 bytes, 4096 bits, mantissa 4065 bits, precision 1223.99 digits (extended 1233.02 digits), exponent range +-161614248.01, exponent bias 536870911
#define REAL			real4096	// number type
#define REALEXT			real4096ext	// extended number type
#define BASE_BITS		32		// number of bits of base entry
#define BASE_NUM		128		// number of base entries
#define EXP_BITS		30		// number of exponent bits (max. 30)
#define FACT_MAX		23310032	// max. integer factorial
#define REALNAME(x)		Real4096 ## x	// name of functions
#define REAL_CONST		"const/const4096.h"
#if USE_REAL6144
#define REALREF			real6144	// reference number type
#define REALREFNAME(x)	Real6144 ## x		// name of reference functions
#endif
#ifdef REAL_PATH
#include REAL_PATH				// "./real_h.h" or "./real_cpp.h"
#endif
#endif // USE_REAL4096

#if USE_REAL6144
// real6144, size 768 bytes, 6144 bits, mantissa 6113 bits, precision 1840.50 digits (extended 1849.53 digits), exponent range +-161614248.01, exponent bias 536870911
#define REAL			real6144	// number type
#define REALEXT			real6144ext	// extended number type
#define BASE_BITS		32		// number of bits of base entry
#define BASE_NUM		192		// number of base entries
#define EXP_BITS		30		// number of exponent bits (max. 30)
#define FACT_MAX		23310032	// max. integer factorial
#define REALNAME(x)		Real6144 ## x	// name of functions
#define REAL_CONST		"const/const6144.h"
#if USE_REAL8192
#define REALREF			real8192	// reference number type
#define REALREFNAME(x)	Real8192 ## x		// name of reference functions
#endif
#ifdef REAL_PATH
#include REAL_PATH				// "./real_h.h" or "./real_cpp.h"
#endif
#endif // USE_REAL6144

#if USE_REAL8192
// real8192, size 1024 bytes, 8192 bits, mantissa 8161 bits, precision 2457.01 digits (extended 2466.04 digits), exponent range +-161614248.01, exponent bias 536870911
#define REAL			real8192	// number type
#define REALEXT			real8192ext	// extended number type
#define BASE_BITS		32		// number of bits of base entry
#define BASE_NUM		256		// number of base entries
#define EXP_BITS		30		// number of exponent bits (max. 30)
#define FACT_MAX		23310032	// max. integer factorial
#define REALNAME(x)		Real8192 ## x	// name of functions
#define REAL_CONST		"const/const8192.h"
#if USE_REAL12288
#define REALREF			real12288	// reference number type
#define REALREFNAME(x)	Real12288 ## x		// name of reference functions
#endif
#ifdef REAL_PATH
#include REAL_PATH				// "./real_h.h" or "./real_cpp.h"
#endif
#endif // USE_REAL8192

#if USE_REAL12288
// real12288, size 1536 bytes, 12288 bits, mantissa 12257 bits, precision 3690.03 digits (extended 3699.06 digits), exponent range +-161614248.01, exponent bias 536870911
#define REAL			real12288	// number type
#define REALEXT			real12288ext	// extended number type
#define BASE_BITS		32		// number of bits of base entry
#define BASE_NUM		384		// number of base entries
#define EXP_BITS		30		// number of exponent bits (max. 30)
#define FACT_MAX		23310032	// max. integer factorial
#define REALNAME(x)		Real12288 ## x	// name of functions
#define REAL_CONST		"const/const12288.h"
#if USE_REAL16384
#define REALREF			real16384	// reference number type
#define REALREFNAME(x)	Real16384 ## x		// name of reference functions
#endif
#ifdef REAL_PATH
#include REAL_PATH				// "./real_h.h" or "./real_cpp.h"
#endif
#endif // USE_REAL12288

#undef REAL_PATH	// "real_h.h" or "real_cpp.h"
