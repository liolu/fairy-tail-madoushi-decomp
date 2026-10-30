/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_ov049_021b2418[];
extern u8 data_ov049_021b25bc[];
extern u8 data_ov049_021b292c[];

u32 data_ov049_021b230c[11] = {0x00000002,
                               0x000009BB,
                               0x00000A23,
                               0x000009BB,
                               0x000009BC,
                               0x000009BD,
                               0x000009BE,
                               0x00000053,
                               (u32) &data_ov049_021b292c,
                               (u32) &data_ov049_021b25bc,
                               (u32) &data_ov049_021b2418};
