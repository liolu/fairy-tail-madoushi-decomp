#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_020a1ac0;

void func_020068cc(void) {
    M2C_FIELD(&data_020a1ac0, s32 *, 0x10) = 0;
    M2C_FIELD(&data_020a1ac0, s32 *, 8)    = 0;
}
