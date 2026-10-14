#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_020a1ac0;

s32 func_020069b4(void) {
    return M2C_FIELD(&data_020a1ac0, s32 *, 0x10);
}
