#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_0215a090;

s32 func_0204426c(void) {
    if (M2C_FIELD(M2C_FIELD(&data_0215a090, void **, 0xC), u8 *, 0x50D) == 1) {
        return 1;
    }
    return 0;
}
