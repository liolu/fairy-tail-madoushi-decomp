/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_ov012_021a20f8[];
extern u8 data_ov012_021a229c[];
extern u8 data_ov012_021a271c[];

u32 data_ov012_021a1fc8[4]  = {0x00000056, (u32) &data_ov012_021a271c, (u32) &data_ov012_021a229c, (u32) &data_ov012_021a20f8};
u32 data_ov012_021a1fd8[10] = {0x00E100E0, 0x00E300E2, 0x00E500E4, 0x00E600E5, 0x00E800E7,
                               0x00EA00E9, 0x00F100F0, 0x00EC00EB, 0x00EE00ED, 0x00F200EF};
