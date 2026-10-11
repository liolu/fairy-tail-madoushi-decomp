#include "m2c.h"
#include "engine.h"

extern M2C_UNK data_020a1ac0;

void func_02003ffc(s32 arg0, s32 arg1) {
    M2C_FIELD(&data_020a1ac0, s8 *, 0x64) = (s8) arg0;
    M2C_FIELD(&data_020a1ac0, s8 *, 0x65) = (s8) arg1;
}
