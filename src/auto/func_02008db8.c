#include "m2c.h"
#include "engine.h"

void func_02008db8(s32 arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(M2C_FIELD((arg0 + (arg1 * 4)), void **, 0x70), s32 *, 0x24) = arg2;
}
