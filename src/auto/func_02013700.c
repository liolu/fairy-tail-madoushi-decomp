#include "m2c.h"

extern M2C_UNK data_021405e0;

s32 func_02013700(s32 arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(&data_021405e0, s32 *, 0xDE4) = 2;
    M2C_FIELD(&data_021405e0, s32 *, 0xFF0) = arg0;
    M2C_FIELD(&data_021405e0, s32 *, 0xFF4) = arg1;
    M2C_FIELD(&data_021405e0, s32 *, 0xFF8) = arg2;
    return 1;
}
