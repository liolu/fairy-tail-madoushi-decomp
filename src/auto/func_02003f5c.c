#include "m2c.h"
#include "engine.h"

extern M2C_UNK data_020a2520;

void func_02003f5c(s32 arg0, s32 arg1) {
    M2C_FIELD(((arg0 * 0x18) + (s32) &data_020a2520), s32 *, 0xC) = arg1;
}
