#include "m2c.h"
#include "engine.h"

extern M2C_UNK data_020a1ac0;

void func_02003fd8(void) {
    M2C_FIELD(&data_020a1ac0, s8 *, 0x64) = 0;
    M2C_FIELD(&data_020a1ac0, s8 *, 0x65) = 0;
    M2C_FIELD(&data_020a1ac0, s32 *, 0x68) = 0;
    M2C_FIELD(&data_020a1ac0, s32 *, 0x6C) = 0;
}
