#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_020a1ac0;

void func_02008e78(s32 arg0) {
    *(M2C_UNK *) arg0                      = 0;
    M2C_FIELD(&data_020a1ac0, s32 *, 0x48) = (s32) (M2C_FIELD(&data_020a1ac0, s32 *, 0x48) - 1);
}
