#include "engine.h"
#include "m2c.h"

extern void *data_021578b0;

s32 func_020335f8(void) {
    return M2C_FIELD(data_021578b0, s32 *, 0x84);
}
