#include "m2c.h"
#include "engine.h"

extern M2C_UNK data_0214d694;

void func_02023970(void) {
    if (M2C_FIELD(&data_0214d694, s32 *, 0) != 0) {
        M2C_FIELD(&data_0214d694, s32 *, 4) = 1;
    }
}
