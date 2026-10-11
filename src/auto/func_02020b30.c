#include "m2c.h"
#include "engine.h"

s32 func_02020b30(s32 arg0, s32 arg1) {
    return (s32) M2C_FIELD((arg0 + arg1), s8 *, 0x7D5);
}
