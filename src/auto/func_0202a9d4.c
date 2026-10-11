#include "m2c.h"
#include "engine.h"

extern M2C_UNK data_0214e1c0;

void func_0202a9d4(s32 arg0, s32 arg1) {
    M2C_FIELD(&data_0214e1c0, s32 *, 0) = arg0;
    M2C_FIELD(&data_0214e1c0, s16 *, 4) = (s16) arg1;
}
