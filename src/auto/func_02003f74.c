#include "m2c.h"
#include "engine.h"

extern M2C_UNK data_020a2520;

s32 func_02003f74(s32 arg0) {
    return M2C_FIELD(((arg0 * 0x18) + (s32) &data_020a2520), s32 *, 0xC);
}
