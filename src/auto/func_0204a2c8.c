#include "engine.h"
#include "m2c.h"

M2C_UNK func_0204a250(void);
M2C_UNK func_0204a28c(void);

s32 func_0204a2c8(void) {
    s32 temp_r4;

    temp_r4 = func_0204a250();
    return (0x100 - temp_r4) - func_0204a28c();
}
