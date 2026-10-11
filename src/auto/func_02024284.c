#include "m2c.h"
#include "engine.h"

extern M2C_UNK data_0214df00;

void func_02024284(s32 arg0, s32 arg1) {
    M2C_FIELD(&data_0214df00, s32 *, 0x10) = arg0;
    M2C_FIELD(&data_0214df00, s32 *, 0x14) = arg1;
}
