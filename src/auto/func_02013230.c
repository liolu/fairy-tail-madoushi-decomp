#include "m2c.h"
#include "engine.h"

extern M2C_UNK data_021405e0;

void func_02013230(s32 arg0) {
    M2C_FIELD(&data_021405e0, s32 *, 0xDD8) = arg0;
}
