#include "engine.h"
#include "m2c.h"

s32 func_0203c0a8(s32 arg0, s32 arg1) {
    M2C_FIELD((void *) 0x04000280, s16 *, 0)    = 1;
    M2C_FIELD((void *) 0x04000280, s32 *, 0x10) = 0;
    M2C_FIELD((void *) 0x04000280, s32 *, 0x14) = arg0;
    M2C_FIELD((void *) 0x04000280, s32 *, 0x18) = arg1;
    M2C_FIELD((void *) 0x04000280, s32 *, 0x1C) = 0;
    return arg0;
}
