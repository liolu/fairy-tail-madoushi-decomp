#include "m2c.h"
#include "engine.h"

extern M2C_UNK data_021405e0;

void func_020131f8(s32 arg0) {
    M2C_FIELD(&data_021405e0, s32 *, 0xDD0) = arg0;
}
