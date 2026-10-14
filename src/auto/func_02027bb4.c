#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_0214e088;

void func_02027bb4(s32 arg0) {
    if (M2C_FIELD(&data_0214e088, s32 *, 0) != 0) {
        M2C_FIELD(&data_0214e088, s32 *, 0x58) = arg0;
    }
}
