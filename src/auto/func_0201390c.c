#include "engine.h"
#include "m2c.h"

M2C_UNK func_020053bc(M2C_UNK, M2C_UNK);

extern M2C_UNK data_021416c4;

void func_0201390c(s32 arg0, s32 arg1, s32 arg2) {
    *((M2C_UNK *) ((s8 *) &data_021416c4 + (arg0 * 4))) = func_020053bc(arg1, arg2);
}
