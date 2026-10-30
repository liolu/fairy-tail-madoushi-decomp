/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_ov057_021af280[];
extern u8 data_ov057_021af400[];
extern u8 data_ov057_021af448[];

u32 data_ov057_021af254[5] = {0x00000002, 0x00000B21, 0x00000B28, 0x00000B21, 0x00000B21};
u32 data_ov057_021af268[6] = {
    0x00000B21, 0x00000B21, 0x00000012, (u32) &data_ov057_021af280, (u32) &data_ov057_021af400, (u32) &data_ov057_021af448};
