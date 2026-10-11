#include "m2c.h"
#include "engine.h"

s32 func_0200b324(s32 arg0, s32 arg1) {
    s32 temp_r0;
    s32 var_r0;

    temp_r0 = M2C_FIELD(M2C_FIELD((arg0 + (arg1 * 4)), void **, 0x70), s32 *, 4);
    if (temp_r0 & 0x10000) {
        if (temp_r0 & 0x10) {
            var_r0 = 3;
        } else {
            var_r0 = 1;
        }
        return var_r0;
    }
    return 0;
}
