/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_ov050_021a2448[];

u32 data_ov050_021a300c[2]  = {0x0A980A97, 0x0000003D};
u32 data_ov050_021a3014[3]  = {(u32) &data_ov050_021a2448, 0x00000000, 0xFFFFFFFF};
u32 data_ov050_021a3020[13] = {0x0A980A97, 0x0000003E, (u32) &data_ov050_021a2448, 0x00000000, 0xFFFFFFFF,
                               0x0A980A97, 0x0000003F, (u32) &data_ov050_021a2448, 0x00000000, 0xFFFFFFFF,
                               0x0A980A97, 0x00000040, (u32) &data_ov050_021a2448};
