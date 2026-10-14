#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_02142620;

void func_0201b820(s32 arg0) {
    *((M2C_UNK *) ((s8 *) &data_02142620 + (arg0 * 0x1C))) = 0;
}
