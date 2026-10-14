#include "engine.h"
#include "m2c.h"

s32 func_02008c50(s32 arg0, s32 arg1) {
    if (M2C_FIELD(M2C_FIELD((arg0 + (arg1 * 4)), void **, 0x70), s32 *, 4) & 2) {
        return 1;
    }
    return 0;
}
