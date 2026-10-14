#include "engine.h"
#include "m2c.h"

M2C_UNK func_02048b78(void);

s32 func_020362f8(void) {
    if (func_02048b78() == 1) {
        return 7;
    }
    return 3;
}
