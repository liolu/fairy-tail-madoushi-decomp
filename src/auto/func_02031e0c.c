#include "m2c.h"
#include "engine.h"

extern M2C_UNK data_02156e60;

void func_02031e0c(s32 arg0) {
    M2C_FIELD(&data_02156e60, s32 *, 4) = (s32) (M2C_FIELD(&data_02156e60, s32 *, 4) & ~(1 << arg0));
}
