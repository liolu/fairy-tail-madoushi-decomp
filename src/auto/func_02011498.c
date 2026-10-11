#include "m2c.h"
#include "engine.h"

extern M2C_UNK data_020af8d8;

s32 func_02011498(void) {
    if (M2C_FIELD(&data_020af8d8, s32 *, 8) == 0) {
        return 0;
    }
    return M2C_FIELD(&data_020af8d8, s32 *, 0x1C);
}
