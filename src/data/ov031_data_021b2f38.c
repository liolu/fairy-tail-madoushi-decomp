/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_ov031_021b3038[];
extern u8 data_ov031_021b31dc[];
extern u8 data_ov031_021b352c[];

u32 data_ov031_021b2f38[11] = {0x00000002,
                               0x0000055F,
                               0x000005C4,
                               0x0000055F,
                               0x00000560,
                               0x00000561,
                               0x00000562,
                               0x00000060,
                               (u32) &data_ov031_021b352c,
                               (u32) &data_ov031_021b31dc,
                               (u32) &data_ov031_021b3038};
