#include "engine.h"
#include "m2c.h"

void func_0200b40c(s32 arg0, s32 arg1) {
    void *temp_r1;

    temp_r1                         = M2C_FIELD((arg0 + (arg1 * 4)), void **, 0x70);
    M2C_FIELD(temp_r1, s32 *, 0x50) = 0;
    M2C_FIELD(temp_r1, s32 *, 0x54) = 0;
}
