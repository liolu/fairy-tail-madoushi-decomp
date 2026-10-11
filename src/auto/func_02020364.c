#include "m2c.h"
#include "engine.h"

s32 func_02020364(s32 arg0, s32 arg1) {
    if (M2C_FIELD((arg0 + arg1), u8 *, 8) & 4) {
        return 1;
    }
    return 0;
}
