#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_0214d694;

void func_020233a4(s32 arg0, s32 arg1) {
    M2C_FIELD(&data_0214d694, s32 *, 0x74) = arg0;
    M2C_FIELD(&data_0214d694, s32 *, 0x78) = arg1;
}
