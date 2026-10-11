#include "m2c.h"
#include "engine.h"

void func_02007180(M2C_UNK, M2C_UNK, M2C_UNK);
void func_02007198(M2C_UNK, M2C_UNK);
void func_020071a8(M2C_UNK, M2C_UNK);

extern M2C_UNK data_020a1d94;

void func_020070e8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 var_r5;

    M2C_FIELD(&data_020a1d94, s32 *, 0) = arg0;
    M2C_FIELD(&data_020a1d94, s32 *, 4) = arg2;
    M2C_FIELD(&data_020a1d94, s32 *, 8) = arg4;
    if (arg0 & 1) {
        var_r5 = 0;
        func_02007180(0, 0, 0);
        do {
            func_02007198(var_r5, 0);
            func_020071a8(var_r5, var_r5);
            var_r5 += 1;
        } while (var_r5 < 8);
    }
    if (arg1 != 0) {
        ((M2C_UNK (*)()) arg1)();
    }
    if (arg3 == 0) {
        return;
    }
    ((M2C_UNK (*)()) arg3)();
}
