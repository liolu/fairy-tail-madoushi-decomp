#include "m2c.h"
#include "engine.h"

M2C_UNK func_02056c88(M2C_UNK, M2C_UNK);

s32 func_0204d9ac(s32 arg0, s32 arg1) {
    s16 temp_r2;

    temp_r2 = M2C_FIELD(arg0, s16 *, 0x2F0);
    return ((func_02056c88((arg1 + temp_r2) - 1, (s32) temp_r2) + 0x1F) & ~0x1F) * 4;
}
