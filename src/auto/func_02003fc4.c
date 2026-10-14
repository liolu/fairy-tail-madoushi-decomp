#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_020a2520;

s32 func_02003fc4(void) {
    return M2C_FIELD(&data_020a2520, s32 *, 0x60C);
}
