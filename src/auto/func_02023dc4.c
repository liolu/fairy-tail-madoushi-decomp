#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_0214df18;

void func_02023dc4(s32 arg0, s32 arg1) {
    M2C_FIELD(&data_0214df18, s32 *, 0x34) = arg0;
    M2C_FIELD(&data_0214df18, s32 *, 0x38) = arg1;
}
