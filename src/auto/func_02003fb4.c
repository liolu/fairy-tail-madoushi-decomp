#include "m2c.h"
#include "engine.h"

extern M2C_UNK data_020a2520;

void func_02003fb4(s32 arg0) {
    M2C_FIELD(&data_020a2520, s32 *, 0x60C) = arg0;
}
