/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_ov045_021b338c[];
extern u8 data_ov045_021b36dc[];

u32 data_ov045_021b3074[1] = {0xD60AD60A};
u32 data_ov045_021b3078[4] = {0x00000002, 0x000008CA, 0x0000092C, 0x000008CA};
u32 data_ov045_021b3088[6] = {
    0x000008CB, 0x000008CC, 0x000008CD, 0x0000006B, (u32) &data_ov045_021b36dc, (u32) &data_ov045_021b338c};
