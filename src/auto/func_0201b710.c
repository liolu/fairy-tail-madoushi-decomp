#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_02142620;

void func_0201b710(s32 arg0, s32 arg1) {
    M2C_FIELD(((arg0 * 0x1C) + (s32) &data_02142620), s32 *, 0x10) = arg1;
}
