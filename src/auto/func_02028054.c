#include "m2c.h"
#include "engine.h"

extern M2C_UNK data_0214e020;

void func_02028054(s32 arg0, s32 arg1) {
    if (M2C_FIELD(&data_0214e020, s32 *, 0x38) != 0) {
        M2C_FIELD(&data_0214e020, s32 *, 0x58) = arg0;
        M2C_FIELD(&data_0214e020, s32 *, 0x5C) = arg1;
    }
}
