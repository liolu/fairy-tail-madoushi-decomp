#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_020a1ac0;

s32 func_02004078(void) {
    return M2C_FIELD(&data_020a1ac0, s32 *, 0x68);
}
