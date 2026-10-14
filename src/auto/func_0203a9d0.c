#include "engine.h"
#include "m2c.h"

s32 func_0203a9d0(s32 arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x14) & 4) {
        return 1;
    }
    return 0;
}
