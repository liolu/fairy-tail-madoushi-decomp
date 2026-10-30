/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_ov065_021b2c40[];
extern u8 data_ov065_021b2de4[];
extern u8 data_ov065_021b321c[];

u32 data_ov065_021b2a64[1]  = {0x0000E000};
u32 data_ov065_021b2a68[3]  = {0x00000000, 0x00010000, 0x00000000};
u32 data_ov065_021b2a74[11] = {0x00000002,
                               0x00000C28,
                               0x00000CAF,
                               0x00000C28,
                               0x00000C29,
                               0x00000C2A,
                               0x00000C2B,
                               0x0000004E,
                               (u32) &data_ov065_021b321c,
                               (u32) &data_ov065_021b2de4,
                               (u32) &data_ov065_021b2c40};
