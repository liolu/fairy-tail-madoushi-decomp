/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_ov060_021a3dc0[];
extern u8 data_ov060_021a3f64[];
extern u8 data_ov060_021a4304[];

u32 data_ov060_021a3bcc[11] = {0x00000002,
                               0x00000B31,
                               0x00000B9B,
                               0x00000B31,
                               0x00000B32,
                               0x00000B33,
                               0x00000B34,
                               0x00000063,
                               (u32) &data_ov060_021a4304,
                               (u32) &data_ov060_021a3f64,
                               (u32) &data_ov060_021a3dc0};
