#include "m2c.h"
#include "engine.h"

extern M2C_UNK data_021405e0;

s32 func_02013554(void) {
    if (M2C_FIELD(&data_021405e0, s32 *, 0x14) == 0) {
        return M2C_FIELD(&data_021405e0, s32 *, 0x34);
    }
    return 1;
}
