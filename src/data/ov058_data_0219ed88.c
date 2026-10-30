/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_ov058_0219edac[];
extern u8 data_ov058_0219ef00[];
extern u8 data_ov058_0219efa0[];

u32 data_ov058_0219ed88[2] = {0x00000B30, 0x00000B29};
u32 data_ov058_0219ed90[7] = {0x00000B29,
                              0x00000B29,
                              0x00000B29,
                              0x00000010,
                              (u32) &data_ov058_0219edac,
                              (u32) &data_ov058_0219ef00,
                              (u32) &data_ov058_0219efa0};
