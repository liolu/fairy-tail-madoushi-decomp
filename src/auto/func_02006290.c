#include "m2c.h"
#include "engine.h"

extern M2C_UNK data_020a1f50;

void func_02006290(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_ip;

    temp_ip = (arg0 * 0x38) + (s32) &data_020a1f50;
    M2C_FIELD(temp_ip, s8 *, 0x34) = 0;
    M2C_FIELD(temp_ip, s32 *, 0x1C) = arg1;
    M2C_FIELD(temp_ip, s32 *, 0x28) = arg2;
    M2C_FIELD(temp_ip, s32 *, 0x30) = arg3;
}
