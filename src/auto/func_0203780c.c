#include "m2c.h"
#include "engine.h"

s32 func_0203780c(s32 arg0) {
    s32 var_r0;
    u32 temp_r3;

    temp_r3 = arg0 - 9;
    var_r0 = 0;
    if (temp_r3 > 0x1AU) {
        return 0;
    }
    if (0x0400030F & (1 << temp_r3)) {
        var_r0 = 1;
    }
    return var_r0;
}
