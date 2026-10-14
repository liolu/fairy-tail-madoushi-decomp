#include "engine.h"
#include "m2c.h"

M2C_UNK func_0203f0d4(M2C_UNK);

s32 func_02051eac(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    return (M2C_FIELD(arg0, u16 *, 0x810) * func_0203f0d4(arg1 & ((1 << arg3) - 1))) + arg2;
}
