/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_ov021_021b27e4[];

u32 data_ov021_021b302c[2]  = {0x037A0379, 0x0000000B};
u32 data_ov021_021b3034[3]  = {(u32) &data_ov021_021b27e4, 0x00000000, 0xFFFFFFFF};
u32 data_ov021_021b3040[13] = {0x037A0379, 0x0000000C, (u32) &data_ov021_021b27e4, 0x00000000, 0xFFFFFFFF,
                               0x037A0379, 0x0000000D, (u32) &data_ov021_021b27e4, 0x00000000, 0xFFFFFFFF,
                               0x037A0379, 0x0000000E, (u32) &data_ov021_021b27e4};
