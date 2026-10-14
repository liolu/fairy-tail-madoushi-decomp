#include "engine.h"
#include "m2c.h"

s32 func_0203a9c0(s32 arg0, s32 arg1) {
    return *M2C_FIELD(arg0, s32 **, 0x20) + arg1;
}
