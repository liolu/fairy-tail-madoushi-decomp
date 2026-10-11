#include "m2c.h"
#include "engine.h"

extern M2C_UNK data_0214e088;

void func_02027be4(s32 arg0, s32 arg1) {
    if (M2C_FIELD(&data_0214e088, s32 *, 0) != 0) {
        M2C_FIELD(&data_0214e088, s32 *, 0x60) = arg0;
        M2C_FIELD(&data_0214e088, s32 *, 0x64) = arg1;
    }
}
