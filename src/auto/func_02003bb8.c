#include "m2c.h"
#include "engine.h"

extern M2C_UNK data_020a1ac0;

s32 func_02003bb8(void) {
    if (M2C_FIELD(&data_020a1ac0, s32 *, 0xD4) != 0) {
        return 1;
    }
    return 0;
}
