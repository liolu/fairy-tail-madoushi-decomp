#include "engine.h"
#include "m2c.h"

M2C_UNK func_020035e0(M2C_UNK, M2C_UNK, M2C_UNK);

extern M2C_UNK data_020a1ac0;

void func_02007a30(s32 arg0) {
    s32 var_r0;
    s32 var_r2;

    var_r0                                 = func_020035e0(1, 0x20, arg0 * 0x2C);
    var_r2                                 = 0;
    M2C_FIELD(&data_020a1ac0, s32 *, 0x4C) = var_r0;
    M2C_FIELD(&data_020a1ac0, s32 *, 0x50) = arg0;
    M2C_FIELD(&data_020a1ac0, s32 *, 0x54) = 0;
    if (arg0 <= 0) {
        return;
    }
    do {
        var_r2 += 1;
        *(M2C_UNK *) var_r0 = 0;
        var_r0 += 0x2C;
    } while (var_r2 < arg0);
}
