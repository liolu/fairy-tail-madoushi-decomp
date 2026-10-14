#include "engine.h"
#include "m2c.h"

void func_02036430(M2C_UNK, M2C_UNK);
void func_020367ec(M2C_UNK);
void func_02036d1c(M2C_UNK, M2C_UNK, M2C_UNK);

extern M2C_UNK data_021593e0;

void func_02036d6c(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8) {
    s32 var_r0;

    var_r0 = 1;
    if (arg8 != 0) {
        var_r0 = 2;
    }
    func_02036d1c(var_r0, arg3, arg4);
    M2C_FIELD(&data_021593e0, s32 *, 0x4FC) = arg0;
    M2C_FIELD(&data_021593e0, s32 *, 0x500) = arg1;
    M2C_FIELD(&data_021593e0, s32 *, 0x504) = arg2;
    M2C_FIELD(&data_021593e0, s32 *, 0x510) = arg6;
    M2C_FIELD(&data_021593e0, s32 *, 0x514) = arg7;
    M2C_FIELD(&data_021593e0, s32 *, 0x518) = arg8;
    func_02036430((s32) func_020367ec, arg5);
}
