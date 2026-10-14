#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_021425d0;

void func_0201b99c(s32 arg0, s32 arg1) {
    M2C_FIELD(((M2C_UNK *) ((s8 *) &data_021425d0 + (arg0 * 0x10))), s32 *, 0xC) = arg1;
}
