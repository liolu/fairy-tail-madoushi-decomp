#include "engine.h"
#include "m2c.h"

M2C_UNK func_020378d8(M2C_UNK, M2C_UNK);
void func_02045558(M2C_UNK, M2C_UNK, M2C_UNK);

s32 func_0203952c(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_r0;
    void *temp_r3;
    void *temp_r5;

    temp_r5 = M2C_FIELD(arg0, void **, 0);
    temp_r3 = M2C_FIELD(temp_r5, void **, 0x20);
    if (M2C_FIELD(temp_r3, s32 *, 0x1C) != 0) {
        func_02045558(M2C_FIELD(arg0, s32 *, 4), arg1, arg2);
        var_r0 = 0;
    } else {
        var_r0 = func_020378d8(M2C_FIELD(temp_r5, s32 *, 8), M2C_FIELD(temp_r3, s32(**)(void *, s32, s32, s32),
                                                                       0x20)(temp_r5, arg1, M2C_FIELD(arg0, s32 *, 4), arg2));
    }
    M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) + arg2);
    return var_r0;
}
