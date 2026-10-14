#include "m2c.h"

s32 func_0203c300();                                /* extern */

s32 func_0200655c(void) {
    s32 temp_r1;
    s32 var_r0;

    temp_r1 = func_0203c300() * 0x168;
    var_r0  = ((s32) (temp_r1 + ((u32) (temp_r1 >> 0xF) >> 0x10)) >> 0x10) << 0xC;
    if (var_r0 < 0) {
        var_r0 += 0x168000;
    }
    return var_r0;
}
