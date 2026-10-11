#include "m2c.h"
#include "engine.h"

extern M2C_UNK data_02142518;

void func_02019540(s32 arg0) {
    if (M2C_FIELD(&data_02142518, s32 *, 0x4C) != 0) {
        M2C_FIELD(&data_02142518, s32 *, 0x5C) = arg0;
    }
}
