#include "engine.h"
#include "m2c.h"

s32 func_02020330(s32 arg0, s32 arg1) {
    if (M2C_FIELD((arg0 + arg1), u8 *, 8) & 2) {
        return 1;
    }
    return 0;
}
