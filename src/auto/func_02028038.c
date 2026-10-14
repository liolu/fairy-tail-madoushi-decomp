#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_0214e020;

void func_02028038(s32 arg0, s32 arg1) {
    if (M2C_FIELD(&data_0214e020, s32 *, 0x38) != 0) {
        M2C_FIELD(&data_0214e020, s32 *, 0x50) = arg0;
        M2C_FIELD(&data_0214e020, s32 *, 0x54) = arg1;
    }
}
