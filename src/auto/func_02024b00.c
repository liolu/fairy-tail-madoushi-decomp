#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_0214df18;

void func_02024b00(s32 arg0) {
    M2C_FIELD(&data_0214df18, s32 *, 0x10) = arg0;
}
