#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_020a1d4c;

s32 func_02003ab0(void) {
    if (M2C_FIELD(&data_020a1d4c, u8 *, 0x10) & 2) {
        return 1;
    }
    return 0;
}
