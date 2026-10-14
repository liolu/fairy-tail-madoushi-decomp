#include "engine.h"
#include "m2c.h"

M2C_UNK func_02020f90(M2C_UNK, M2C_UNK);
M2C_UNK func_02021208(M2C_UNK);

extern M2C_UNK data_0214c738;

void func_020214e0(s32 arg0) {
    M2C_FIELD(&data_0214c738, s32 *, 0x4C) = func_02020f90(func_02021208(0), arg0);
}
