#include "m2c.h"

s32 func_02022830(void *arg0) {
    s32 temp_r1;
    s32 var_r0;

    temp_r1 = M2C_FIELD(arg0, s32 *, 0x28) - 0x1000;
    M2C_FIELD(arg0, s32 *, 0x28) = temp_r1;
    var_r0 = 1;
    if (temp_r1 > 0) {
        var_r0 = 0;
    }
    return var_r0;
}
