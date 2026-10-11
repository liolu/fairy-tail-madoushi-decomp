#include "m2c.h"
#include "engine.h"

extern M2C_UNK data_0215a090;

s32 func_020441f8(void) {
    return (s32) M2C_FIELD(M2C_FIELD(&data_0215a090, void **, 0xC), u16 *, 0xC);
}
