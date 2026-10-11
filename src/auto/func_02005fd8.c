#include "m2c.h"
#include "engine.h"

extern M2C_UNK data_020a38d0;

s32 func_02005fd8(void) {
    s32 var_r0;

    if (M2C_FIELD(&data_020a38d0, s32 *, 0) != 0) {
        return 0;
    }
    if (M2C_FIELD(&data_020a38d0, s32 *, 0xC) == M2C_FIELD(&data_020a38d0, s32 *, 0x10)) {
        return 0;
    }
    var_r0 = M2C_FIELD(&data_020a38d0, s32 *, 0xC) - M2C_FIELD(&data_020a38d0, s32 *, 0x10);
    if (var_r0 < 0) {
        var_r0 += 0x100;
    }
    return var_r0;
}
