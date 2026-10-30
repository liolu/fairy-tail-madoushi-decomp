/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_ov028_021a3d84[];
extern u8 data_ov028_021a3f28[];
extern u8 data_ov028_021a4380[];

u32 data_ov028_021a3b28[11] = {0x00000002,
                               0x000004CF,
                               0x0000055E,
                               0x000004CF,
                               0x000004D0,
                               0x000004D1,
                               0x000004D2,
                               0x0000004A,
                               (u32) &data_ov028_021a4380,
                               (u32) &data_ov028_021a3f28,
                               (u32) &data_ov028_021a3d84};
