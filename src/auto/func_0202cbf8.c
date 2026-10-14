#include "engine.h"
#include "m2c.h"

s32 func_0202cbf8(s32 arg0) {
    if (arg0 != 0) {
        return M2C_FIELD(arg0, u16 *, 0x1C) * 8;
    }
    return 0;
}
