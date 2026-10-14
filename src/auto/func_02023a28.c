#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_0214d694;

void func_02023a28(s32 arg0, s32 arg1) {
    if (M2C_FIELD(&data_0214d694, s32 *, 8) != 0) {
        M2C_FIELD(&data_0214d694, s32 *, 0x18) = arg0;
        M2C_FIELD(&data_0214d694, s32 *, 0x1C) = arg1;
    }
}
