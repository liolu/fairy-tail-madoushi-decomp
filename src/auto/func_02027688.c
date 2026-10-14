#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_0214e020;

void func_02027688(s32 arg0, s32 arg1) {
    if (M2C_FIELD(&data_0214e020, s32 *, 0x20) != 0) {
        M2C_FIELD(&data_0214e020, s32 *, 0x30) = arg0;
        M2C_FIELD(&data_0214e020, s32 *, 0x34) = arg1;
    }
}
