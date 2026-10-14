#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_021425d0;

void func_0201b8e4(s32 arg0) {
    *((M2C_UNK *) ((s8 *) &data_021425d0 + (arg0 * 0x10))) = 0;
}
