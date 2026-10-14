#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_02142518;

void func_02019a1c(s32 arg0) {
    M2C_FIELD(&data_02142518, s32 *, 0x20) = arg0;
    M2C_FIELD(&data_02142518, s32 *, 0x24) = 0;
    M2C_FIELD(&data_02142518, s32 *, 0x28) = 0;
    M2C_FIELD(&data_02142518, s32 *, 0x38) = 0;
}
