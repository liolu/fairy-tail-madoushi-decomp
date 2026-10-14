#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_0214e088;

s32 func_02027c48(void) {
    if (M2C_FIELD(&data_0214e088, s32 *, 0) == 0) {
        return 0;
    }
    if (M2C_FIELD(&data_0214e088, s32 *, 4) != 0) {
        return 1;
    }
    return 0;
}
