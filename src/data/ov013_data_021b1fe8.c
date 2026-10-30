/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_ov013_021b2118[];
extern u8 data_ov013_021b22bc[];
extern u8 data_ov013_021b273c[];

u32 data_ov013_021b1fe8[4]  = {0x00000056, (u32) &data_ov013_021b273c, (u32) &data_ov013_021b22bc, (u32) &data_ov013_021b2118};
u32 data_ov013_021b1ff8[10] = {0x00E100E0, 0x00E300E2, 0x00E500E4, 0x00E600E5, 0x00E800E7,
                               0x00EA00E9, 0x00F100F0, 0x00EC00EB, 0x00EE00ED, 0x00F200EF};
