#include "engine.h"
#include "m2c.h"

s32 func_02020f90(s32 arg0, s32 arg1) {
    return (s32) M2C_FIELD(((arg1 * 0xC) + arg0), u8 *, 0xAF0);
}
