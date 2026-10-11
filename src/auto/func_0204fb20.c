#include "m2c.h"
#include "engine.h"

extern M2C_UNK data_0215c4cc;

void func_0204fb20(s32 arg0, s32 arg1) {
    M2C_FIELD((M2C_FIELD(&data_0215c4cc, s32 *, 4) + (arg0 * 4)), s32 *, 0x18) = arg1;
}
