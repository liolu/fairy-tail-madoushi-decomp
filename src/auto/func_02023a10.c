#include "m2c.h"
#include "engine.h"

extern M2C_UNK data_0214d694;

void func_02023a10(s32 arg0) {
    if (M2C_FIELD(&data_0214d694, s32 *, 8) != 0) {
        M2C_FIELD(&data_0214d694, s32 *, 0x14) = arg0;
    }
}
