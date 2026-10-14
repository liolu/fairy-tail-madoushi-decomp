#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_020a1ac0;

void func_0200996c(s32 arg0) {
    *(M2C_UNK *) arg0                      = 0;
    M2C_FIELD(&data_020a1ac0, s32 *, 0x84) = (s32) (M2C_FIELD(&data_020a1ac0, s32 *, 0x84) - 1);
}
