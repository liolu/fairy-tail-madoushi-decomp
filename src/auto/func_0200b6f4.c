#include "engine.h"
#include "m2c.h"

s32 func_0200b6f4(s32 arg0, s32 arg1) {
    return (s32) M2C_FIELD(M2C_FIELD((arg0 + (arg1 * 4)), void **, 0x70), s16 *, 0x3C);
}
