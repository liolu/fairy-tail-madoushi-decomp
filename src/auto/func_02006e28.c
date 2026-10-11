#include "m2c.h"
#include "engine.h"

void func_02006e28(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    M2C_FIELD(arg0, s8 *, 0x68) = (s8) arg1;
    M2C_FIELD(arg0, s8 *, 0x69) = (s8) arg2;
    M2C_FIELD(arg0, s8 *, 0x6A) = (s8) arg3;
}
