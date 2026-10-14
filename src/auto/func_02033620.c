#include "engine.h"
#include "m2c.h"

extern void *data_021578b0;

s32 func_02033620(void) {
    return M2C_FIELD(data_021578b0, s32 *, 0x8C);
}
