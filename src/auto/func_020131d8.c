#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_021405e0;

void func_020131d8(s32 arg0) {
    M2C_FIELD(&data_021405e0, s32 *, 0x18) = arg0;
}
