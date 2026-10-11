#include "m2c.h"
#include "engine.h"

extern M2C_UNK data_021405e0;

s32 func_02013250(void) {
    return M2C_FIELD(&data_021405e0, s32 *, 0xDCC);
}
