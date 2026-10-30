/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_ov054_0219f200[];
extern u8 data_ov054_0219f248[];
extern u8 data_ov054_0219f340[];

u32 data_ov054_0219f1d4[1]  = {0x00000002};
u32 data_ov054_0219f1d8[10] = {0x00000B19,
                               0x00000B20,
                               0x00000B19,
                               0x00000B19,
                               0x00000B19,
                               0x00000B19,
                               0x0000000B,
                               (u32) &data_ov054_0219f248,
                               (u32) &data_ov054_0219f200,
                               (u32) &data_ov054_0219f340};
