#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_0214df18;

s32 func_02024b4c(void) {
    return M2C_FIELD(&data_0214df18, s32 *, 0x1C);
}
