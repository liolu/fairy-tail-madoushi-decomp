/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_ov055_021af220[];
extern u8 data_ov055_021af268[];
extern u8 data_ov055_021af360[];

u32 data_ov055_021af1f4[1]  = {0x00000002};
u32 data_ov055_021af1f8[10] = {0x00000B19,
                               0x00000B20,
                               0x00000B19,
                               0x00000B19,
                               0x00000B19,
                               0x00000B19,
                               0x0000000B,
                               (u32) &data_ov055_021af268,
                               (u32) &data_ov055_021af220,
                               (u32) &data_ov055_021af360};
