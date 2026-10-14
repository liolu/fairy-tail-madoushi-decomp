#include "engine.h"
#include "m2c.h"

M2C_UNK func_020470ac(void);

s32 func_020470f8(void) {
    if (func_020470ac() & 0x10000000) {
        return 1;
    }
    return 0;
}
