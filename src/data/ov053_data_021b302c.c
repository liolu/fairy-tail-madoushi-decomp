/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_ov053_021b31ac[];
extern u8 data_ov053_021b3350[];
extern u8 data_ov053_021b3898[];

u32 data_ov053_021b302c[2] = {0x00000002, 0x00000A9D};
u32 data_ov053_021b3034[3] = {0x00000B18, 0x00000A9D, 0x00000A9E};
u32 data_ov053_021b3040[6] = {
    0x00000A9F, 0x00000AA0, 0x0000007A, (u32) &data_ov053_021b3898, (u32) &data_ov053_021b3350, (u32) &data_ov053_021b31ac};
u32 data_ov053_021b3058[7] = {0x0AA60AA5, 0x0AA80AA7, 0x0AAA0AA9, 0x0AAB0AAA, 0x0AAD0AAC, 0x0AAF0AAE, 0x0AB60AB5};
