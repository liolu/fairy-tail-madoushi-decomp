#include "m2c.h"

extern M2C_UNK data_021593e0;

s32 func_02036330(void) {
    if (!(M2C_FIELD(&data_021593e0, s32 *, 4) & 4)) {
        return 1;
    }
    return 0;
}
