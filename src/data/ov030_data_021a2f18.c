/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_ov030_021a3018[];
extern u8 data_ov030_021a31bc[];
extern u8 data_ov030_021a350c[];

u32 data_ov030_021a2f18[11] = {0x00000002,
                               0x0000055F,
                               0x000005C4,
                               0x0000055F,
                               0x00000560,
                               0x00000561,
                               0x00000562,
                               0x00000060,
                               (u32) &data_ov030_021a350c,
                               (u32) &data_ov030_021a31bc,
                               (u32) &data_ov030_021a3018};
