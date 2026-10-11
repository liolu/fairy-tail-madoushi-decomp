#include "m2c.h"
#include "engine.h"

extern M2C_UNK data_021405e0;

s32 func_020132d8(void) {
    if (M2C_FIELD(&data_021405e0, s32 *, 4) == 0) {
        return 1;
    }
    return 0;
}
