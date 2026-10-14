#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_0214d694;

void func_02023308(void) {
    if (M2C_FIELD(&data_0214d694, s32 *, 0x68) != 0) {
        M2C_FIELD(&data_0214d694, s32 *, 0x94) = 1;
    }
}
