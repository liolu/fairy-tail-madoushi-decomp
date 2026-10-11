#include "m2c.h"
#include "engine.h"

extern M2C_UNK data_020a1ac0;

void func_020040d0(void) {
    M2C_FIELD(&data_020a1ac0, s32 *, 0x70) = 0;
    M2C_FIELD(&data_020a1ac0, s32 *, 0x74) = 0;
}
