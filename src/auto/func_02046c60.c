#include "m2c.h"
#include "engine.h"

s32 func_02046c60(s32 arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x64) == 2) {
        return 1;
    }
    return 0;
}
