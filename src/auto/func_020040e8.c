#include "engine.h"
#include "m2c.h"

M2C_UNK func_020035e0(M2C_UNK, M2C_UNK, M2C_UNK);

extern M2C_UNK data_020a1ac0;

void func_020040e8(s32 arg0) {
    s32 var_r0;
    s32 var_r3;

    var_r0                                 = func_020035e0(2, 0x20, arg0 * 0x7C);
    M2C_FIELD(&data_020a1ac0, s32 *, 0x70) = var_r0;
    M2C_FIELD(&data_020a1ac0, s32 *, 0x74) = arg0;
    var_r3                                 = 0;
    if ((arg0 > 0) && (arg0 > 0)) {
        do {
            M2C_FIELD(var_r0, s32 *, 0) = -1;
            var_r3 += 1;
            M2C_FIELD(var_r0, s32 *, 0x78) = 0;
            var_r0 += 0x7C;
        } while (var_r3 < arg0);
    }
    M2C_FIELD(&data_020a1ac0, s32 *, 0x78) = 0;
}
