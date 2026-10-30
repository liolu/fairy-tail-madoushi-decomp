/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_ov050_021a2554[];
extern u8 data_ov050_021a26f8[];
extern u8 data_ov050_021a2b20[];

u32 data_ov050_021a241c[2] = {0x00000002, 0x00000A24};
u32 data_ov050_021a2424[9] = {0x00000A9C,
                              0x00000A24,
                              0x00000A25,
                              0x00000A26,
                              0x00000A27,
                              0x0000005E,
                              (u32) &data_ov050_021a2b20,
                              (u32) &data_ov050_021a26f8,
                              (u32) &data_ov050_021a2554};
