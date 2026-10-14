#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_0214df00;

void func_020247c8(s32 arg0, s32 arg1) {
    M2C_FIELD(&data_0214df00, s32 *, 4) = arg0;
    M2C_FIELD(&data_0214df00, s32 *, 8) = arg1;
}
