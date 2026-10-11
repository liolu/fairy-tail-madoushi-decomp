#include "m2c.h"
#include "engine.h"

extern M2C_UNK data_020a1d4c;

s32 func_02003a94(void) {
    if (M2C_FIELD(&data_020a1d4c, u8 *, 0x10) & 1) {
        return 1;
    }
    return 0;
}
