#include "m2c.h"
#include "engine.h"

extern M2C_UNK data_020a1d4c;

void func_02003b74(s32 arg0) {
    M2C_FIELD(&data_020a1d4c, s32 *, 0x44) = arg0;
}
