#include "m2c.h"
#include "engine.h"

s32 func_02020f70(s32 arg0, s32 arg1) {
    return M2C_FIELD(((arg1 * 0xC) + arg0), s32 *, 0xAEC);
}
