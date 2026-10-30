/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 func_ov030_021a0518[];
extern u8 func_ov030_021a072c[];
extern u8 func_ov030_021a0774[];
extern u8 func_ov030_021a07bc[];
extern u8 func_ov030_021a0804[];
extern u8 func_ov030_021a084c[];

u32 data_ov030_021a2e0c[3] = {0x012C0139, 0x012E012D, 0x0130012F};
u32 data_ov030_021a2e18[7] = {0x01320131,
                              (u32) &func_ov030_021a0518,
                              (u32) &func_ov030_021a072c,
                              (u32) &func_ov030_021a0774,
                              (u32) &func_ov030_021a07bc,
                              (u32) &func_ov030_021a0804,
                              (u32) &func_ov030_021a084c};
