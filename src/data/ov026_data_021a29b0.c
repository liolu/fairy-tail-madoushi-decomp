/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_ov026_021a2ad8[];
extern u8 data_ov026_021a2c7c[];
extern u8 data_ov026_021a2f7c[];
extern u8 func_ov026_021a1714[];

u32 data_ov026_021a29b0[7] = {
    (u32) &func_ov026_021a1714, 0x00C80014, 0x00C80028, 0x00C8003C, 0x00C80050, 0x00C80064, 0x00C80078};
u32 data_ov026_021a29cc[8]  = {0x00C8008C, 0x003C001E, 0x00460028, 0x00500032, 0x005A003C, 0x00640046, 0x006E0050, 0x0078005A};
u32 data_ov026_021a29ec[11] = {0x00000002,
                               0x00000476,
                               0x000004CE,
                               0x00000476,
                               0x00000477,
                               0x00000478,
                               0x00000479,
                               0x00000069,
                               (u32) &data_ov026_021a2f7c,
                               (u32) &data_ov026_021a2c7c,
                               (u32) &data_ov026_021a2ad8};
