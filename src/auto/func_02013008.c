#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_021405e0;

s32 func_02013008(void) {
    if (M2C_FIELD(&data_021405e0, s32 *, 0x44) != 0) {
        return 0;
    }
    return M2C_FIELD(&data_021405e0, s32 *, 0x40);
}
