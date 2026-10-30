/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_ov025_021b2560[];

u32 data_ov025_021b302c[2]  = {0x00000000, 0xFFFFFFFF};
u32 data_ov025_021b3034[3]  = {0x04750474, 0x00000033, (u32) &data_ov025_021b2560};
u32 data_ov025_021b3040[13] = {0x00000000, 0xFFFFFFFF, 0x04750474, 0x00000034, (u32) &data_ov025_021b2560,
                               0x00000000, 0xFFFFFFFF, 0x04750474, 0x00000035, (u32) &data_ov025_021b2560,
                               0x00000000, 0xFFFFFFFF, 0x04750474};
