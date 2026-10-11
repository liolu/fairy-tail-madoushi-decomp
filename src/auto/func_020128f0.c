#include "m2c.h"
#include "engine.h"

extern M2C_UNK data_021405e0;

void func_020128f0(s32 arg0) {
    M2C_FIELD(&data_021405e0, s32 *, 4) = arg0;
    M2C_FIELD(&data_021405e0, s32 *, 8) = 0;
}
