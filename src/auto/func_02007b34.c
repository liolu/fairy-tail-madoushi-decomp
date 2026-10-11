#include "m2c.h"
#include "engine.h"

s32 func_02007b34(s32 arg0, s32 arg1) {
    s32 (*temp_r2)(arg0, arg1);
    void *temp_r3;

    temp_r3 = M2C_FIELD((arg0 + (arg1 * 4)), void **, 0x70);
    if (M2C_FIELD(temp_r3, s32 *, 4) & 2) {
        temp_r2 = M2C_FIELD(temp_r3, s32 (**)(), 0x20);
        if (temp_r2 != NULL) {
            return temp_r2(arg0, arg1);
        }
    }
    return arg0;
}
