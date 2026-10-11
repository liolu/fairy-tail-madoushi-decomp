#include "m2c.h"
#include "engine.h"

s32 func_02042490(s32 arg0) {
    if ((M2C_FIELD(arg0, u16 *, 0x40) != 1) || !(M2C_FIELD(arg0, u8 *, 0x4B) & 2)) {
        return 0;
    }
    return 1;
}
