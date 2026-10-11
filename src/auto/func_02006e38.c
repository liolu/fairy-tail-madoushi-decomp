#include "m2c.h"
#include "engine.h"

void func_02006e38(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    M2C_FIELD(arg0, s8 *, 0x6B) = (s8) arg1;
    M2C_FIELD(arg0, s8 *, 0x6C) = (s8) arg2;
    M2C_FIELD(arg0, s8 *, 0x6D) = (s8) arg3;
}
