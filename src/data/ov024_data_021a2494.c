/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_ov024_021a2640[];
extern u8 data_ov024_021a27e4[];
extern u8 data_ov024_021a2bdc[];

u32 data_ov024_021a2494[4]  = {0x008200A0, 0x008C00BE, 0x009600DC, 0x00A000FA};
u32 data_ov024_021a24a4[11] = {0x00000002,
                               0x000003FC,
                               0x00000475,
                               0x000003FC,
                               0x000003FD,
                               0x000003FE,
                               0x000003FF,
                               0x0000005A,
                               (u32) &data_ov024_021a2bdc,
                               (u32) &data_ov024_021a27e4,
                               (u32) &data_ov024_021a2640};
