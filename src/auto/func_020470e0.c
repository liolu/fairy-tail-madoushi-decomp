#include "m2c.h"
#include "engine.h"

M2C_UNK func_02048b78(void);

extern M2C_UNK data_0205c250;

s32 func_020470e0(void) {
    return *((M2C_UNK *)((s8 *)&data_0205c250 + (func_02048b78() * 4)));
}
