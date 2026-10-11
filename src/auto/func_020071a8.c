#include "m2c.h"
#include "engine.h"

extern M2C_UNK data_020a1da8;

void func_020071a8(s32 arg0, s32 arg1) {
    M2C_FIELD(((M2C_UNK *)((s8 *)&data_020a1da8 + (arg0 * 8))), s32 *, 4) = arg1;
}
