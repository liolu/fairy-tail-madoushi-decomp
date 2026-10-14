#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_021405e0;

void func_02013024(s32 arg0) {
    M2C_FIELD(&data_021405e0, s32 *, 0x44) = arg0;
}
