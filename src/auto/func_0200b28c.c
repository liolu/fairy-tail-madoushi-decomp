#include "engine.h"
#include "m2c.h"

s32 func_0200b28c(s32 arg0, s32 arg1) {
    return M2C_FIELD(M2C_FIELD((arg0 + (arg1 * 4)), void **, 0x70), s32 *, 0xC);
}
