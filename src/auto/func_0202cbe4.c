#include "engine.h"
#include "m2c.h"

s32 func_0202cbe4(s32 arg0) {
    if (arg0 != 0) {
        return M2C_FIELD(arg0, u16 *, 0xC) * 8;
    }
    return 0;
}
