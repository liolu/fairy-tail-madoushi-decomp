#include "engine.h"
#include "m2c.h"

M2C_UNK func_020035e0(M2C_UNK, M2C_UNK, M2C_UNK);
void func_0200f90c(M2C_UNK);

extern M2C_UNK data_020a54e4;

void func_0200f98c(s32 arg0) {
    s32 var_r4;
    s32 var_r5;

    var_r5                                 = func_020035e0(1, 0x20, arg0 * 0x2C);
    M2C_FIELD(&data_020a54e4, s32 *, 0xC)  = var_r5;
    M2C_FIELD(&data_020a54e4, s32 *, 0x10) = arg0;
    var_r4                                 = 0;
    M2C_FIELD(&data_020a54e4, s32 *, 0x14) = 0;
    if (arg0 <= 0) {
        return;
    }
    do {
        func_0200f90c(var_r5);
        var_r4 += 1;
        var_r5 += 0x2C;
    } while (var_r4 < arg0);
}
