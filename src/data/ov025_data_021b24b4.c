/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_ov025_021b2660[];
extern u8 data_ov025_021b2804[];
extern u8 data_ov025_021b2bfc[];

u32 data_ov025_021b24b4[4]  = {0x008200A0, 0x008C00BE, 0x009600DC, 0x00A000FA};
u32 data_ov025_021b24c4[11] = {0x00000002,
                               0x000003FC,
                               0x00000475,
                               0x000003FC,
                               0x000003FD,
                               0x000003FE,
                               0x000003FF,
                               0x0000005A,
                               (u32) &data_ov025_021b2bfc,
                               (u32) &data_ov025_021b2804,
                               (u32) &data_ov025_021b2660};
