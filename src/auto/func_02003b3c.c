#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_020a1d4c;

s32 func_02003b3c(void) {
    return M2C_FIELD(&data_020a1d4c, s32 *, 0x18);
}
