#include "m2c.h"
#include "engine.h"

extern M2C_UNK data_020a1ac0;

s32 func_02004020(void) {
    return (s32) M2C_FIELD(&data_020a1ac0, u8 *, 0x65);
}
