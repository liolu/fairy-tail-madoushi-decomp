#include "m2c.h"

extern M2C_UNK data_0214e088;

void func_02027c18(s32 arg0) {
    if (M2C_FIELD(&data_0214e088, s32 *, 0) == 0) {
        return;
    }
    M2C_FIELD(&data_0214e088, s32 *, 8)    = arg0;
    M2C_FIELD(&data_0214e088, s32 *, 4)    = 1;
    M2C_FIELD(&data_0214e088, s32 *, 0x50) = 0;
    M2C_FIELD(&data_0214e088, s32 *, 0x54) = 0;
}
