#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_020a1ac0;

void func_02003b88(void) {
    M2C_FIELD(&data_020a1ac0, s32 *, 0xD4) = 0;
    M2C_FIELD(&data_020a1ac0, s32 *, 0xD8) = 0;
    M2C_FIELD(&data_020a1ac0, s32 *, 0xDC) = 0;
    M2C_FIELD(&data_020a1ac0, s8 *, 0xE0)  = 0;
    M2C_FIELD(&data_020a1ac0, s32 *, 0xE4) = 0;
    M2C_FIELD(&data_020a1ac0, s32 *, 0xE8) = 0;
}
