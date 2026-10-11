#include "m2c.h"
#include "engine.h"

extern M2C_UNK data_020a1dec;

void func_020068bc(s32 arg0) {
    M2C_FIELD(&data_020a1dec, s32 *, 4) = arg0;
}
