#include "m2c.h"
#include "engine.h"

extern M2C_UNK data_0215a090;

s32 func_020441e4(void) {
    return M2C_FIELD(M2C_FIELD(&data_0215a090, void **, 0xC), s32 *, 8);
}
