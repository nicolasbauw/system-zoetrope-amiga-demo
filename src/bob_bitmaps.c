/*
	Data for "bob_32" Image
*/

#include <exec/types.h>
#include <intuition/intuition.h>


UWORD bob_32PaletteRGB4[8] =
{
	0x0F0F,0x000A,0x003C,0x005D,0x026D,0x047E,0x079F,0x0EEF
};

UWORD bob_32Data[192] =
{
	/* Plane 0 */
	0x0000,0x0000,0x000B,0xF000,0x0008,0x7A00,0x007C,0x3C00,
	0x03DE,0x9E00,0x0303,0x4F00,0x0265,0xA700,0x06F1,0xD318,
	0x0CF1,0xE398,0x0670,0xF38C,0x0C01,0xE99C,0x0600,0xF3C8,
	0x4F05,0x698E,0x47AA,0xF3CE,0x4B55,0xE19E,0x67EB,0xD3CC,
	0x63FF,0xA79E,0x697F,0x431C,0x70BA,0x873E,0x5855,0x0E3C,
	0x5D00,0x3E7C,0x0F80,0xFCFC,0x23F7,0xF8F0,0x01FF,0xD3F8,
	0x00BE,0x87F0,0x0C00,0x0FE0,0x0700,0x7FC0,0x00FF,0xFF80,
	0x00FF,0xFF00,0x004F,0xEC00,0x001A,0x2000,0x0000,0x0000,
	/* Plane 1 */
	0x0000,0x0000,0x000B,0xF000,0x0000,0x7E00,0x0000,0x3F00,
	0x0020,0x1F80,0x00FC,0x0FC0,0x01FA,0x07E0,0x01FE,0x03E0,
	0x03FE,0x03E8,0x01FF,0x03F0,0x03FE,0x01E4,0x01FF,0x03F6,
	0x40FA,0x81F0,0x4055,0x03F0,0x40AA,0x01E0,0x6014,0x03F0,
	0x6000,0x07E0,0x6800,0x03E0,0x7000,0x07C0,0x7800,0x0FC2,
	0x7D00,0x3F86,0x3F80,0xFF00,0x3FF7,0xFF0C,0x1FFF,0xFC00,
	0x0FFF,0xF818,0x0BFF,0xF030,0x04FF,0x8060,0x0100,0x00C0,
	0x0080,0x0280,0x0030,0x1A00,0x0000,0x1800,0x0000,0x0000,
	/* Plane 2 */
	0x0000,0x0000,0x0014,0x0800,0x007F,0x8000,0x01FF,0xC080,
	0x03FF,0xE040,0x07FF,0xF020,0x0FFF,0xF810,0x1FFF,0xFC08,
	0x1FFF,0xFC00,0x3FFF,0xFC04,0x3FFF,0xFE00,0x7FFF,0xFC02,
	0x3FFF,0xFE02,0x3FFF,0xFC02,0x3FFF,0xFE02,0x1FFF,0xFC02,
	0x1FFF,0xF802,0x17FF,0xFC02,0x0FFF,0xF802,0x07FF,0xF002,
	0x02FF,0xC002,0x007F,0x0004,0x0008,0x0004,0x0000,0x0008,
	0x0000,0x0008,0x0000,0x0010,0x0000,0x0020,0x0200,0x0040,
	0x0000,0x0180,0x0040,0x0600,0x001F,0xF800,0x0000,0x0000
};

UWORD bob_32_maskData[64] =
{
	0x0000,0x0000,0x001F,0xF800,0x007F,0xFE00,0x01FF,0xFF80,
	0x03FF,0xFFC0,0x07FF,0xFFE0,0x0FFF,0xFFF0,0x1FFF,0xFFF8,
	0x1FFF,0xFFF8,0x3FFF,0xFFFC,0x3FFF,0xFFFC,0x7FFF,0xFFFE,
	0x7FFF,0xFFFE,0x7FFF,0xFFFE,0x7FFF,0xFFFE,0x7FFF,0xFFFE,
	0x7FFF,0xFFFE,0x7FFF,0xFFFE,0x7FFF,0xFFFE,0x7FFF,0xFFFE,
	0x7FFF,0xFFFE,0x3FFF,0xFFFC,0x3FFF,0xFFFC,0x1FFF,0xFFF8,
	0x0FFF,0xFFF8,0x0FFF,0xFFF0,0x07FF,0xFFE0,0x03FF,0xFFC0,
	0x00FF,0xFF80,0x007F,0xFE00,0x001F,0xF800,0x0000,0x0000
};

UWORD chip clr_patternData[16*14] =
{	
	0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,
	0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,
	0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,
	0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,
	0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,
	0xAAAA,0xAAAA,0xAAAA,0xAAAA,0xAAAA,0xAAAA,0xAAAA,0xAAAA,0xAAAA,0xAAAA,0xAAAA,0xAAAA,0xAAAA,0xAAAA,0xAAAA,0xAAAA,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0xAAAA,0xAAAA,0xAAAA,0xAAAA,0xAAAA,0xAAAA,0xAAAA,0xAAAA,0xAAAA,0xAAAA,0xAAAA,0xAAAA,0xAAAA,0xAAAA,0xAAAA,0xAAAA,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x2222,0x2222,0x2222,0x2222,0x2222,0x2222,0x2222,0x2222,0x2222,0x2222,0x2222,0x2222,0x2222,0x2222,0x2222,0x2222,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
};

UWORD chip clr_patternData_neg[16*14] =
{
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x2222,0x2222,0x2222,0x2222,0x2222,0x2222,0x2222,0x2222,0x2222,0x2222,0x2222,0x2222,0x2222,0x2222,0x2222,0x2222,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0xAAAA,0xAAAA,0xAAAA,0xAAAA,0xAAAA,0xAAAA,0xAAAA,0xAAAA,0xAAAA,0xAAAA,0xAAAA,0xAAAA,0xAAAA,0xAAAA,0xAAAA,0xAAAA,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0xAAAA,0xAAAA,0xAAAA,0xAAAA,0xAAAA,0xAAAA,0xAAAA,0xAAAA,0xAAAA,0xAAAA,0xAAAA,0xAAAA,0xAAAA,0xAAAA,0xAAAA,0xAAAA,
	0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,
	0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,
	0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,
	0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,
	0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,
	0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,
	0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,
};