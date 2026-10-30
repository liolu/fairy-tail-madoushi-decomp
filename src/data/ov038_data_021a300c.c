/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_ov038_021a2418[];

u32 data_ov038_021a300c[2]  = {0x07E207E1, 0x00000038};
u32 data_ov038_021a3014[3]  = {(u32) &data_ov038_021a2418, 0x00000000, 0xFFFFFFFF};
u32 data_ov038_021a3020[13] = {0x07E207E1, 0x00000039, (u32) &data_ov038_021a2418, 0x00000000, 0xFFFFFFFF,
                               0x07E207E1, 0x0000003A, (u32) &data_ov038_021a2418, 0x00000000, 0xFFFFFFFF,
                               0x07E207E1, 0x0000003B, (u32) &data_ov038_021a2418};
