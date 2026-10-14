#include "engine.h"
#include "m2c.h"

extern void *data_021593e0;

s32 func_02036e18(void) {
    return M2C_FIELD(data_021593e0, s32 *, 0x1C);
}
