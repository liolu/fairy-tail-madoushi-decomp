#include "m2c.h"
#include "engine.h"

s32 func_02008cb8(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_r0;
    void *temp_r0;

    temp_r0 = M2C_FIELD((arg0 + (arg1 * 4)), void **, 0x70);
    if (arg2 < 0) {
        if (M2C_FIELD(temp_r0, s32 *, 4) & 0x10) {
            var_r0 = 1;
        } else {
            var_r0 = 0;
        }
        return var_r0;
    }
    if ((s32) M2C_FIELD(temp_r0, s32 *, 8) < arg2) {
        return 1;
    }
    return 0;
}
