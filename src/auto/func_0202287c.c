#include "m2c.h"

extern M2C_UNK data_020a2030;

s32 func_0202287c(void *arg0) {
    if (M2C_FIELD(&data_020a2030, s32 *, 0x10) & M2C_FIELD(arg0, s32 *, 0x28)) {
        return 1;
    }
    return 0;
}
