#include "m2c.h"
#include "engine.h"

M2C_UNK func_020035e0(M2C_UNK, M2C_UNK, M2C_UNK);

extern M2C_UNK data_020a1ac0;

void func_020071e0(s32 arg0) {
    M2C_FIELD(&data_020a1ac0, s32 *, 0x8C) = func_020035e0(1, 0x20, arg0 * 8);
    M2C_FIELD(&data_020a1ac0, s32 *, 0x90) = arg0;
}
