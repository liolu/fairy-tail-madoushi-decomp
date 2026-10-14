#include "engine.h"
#include "m2c.h"

void func_02020f20(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_ip;
    s32 temp_r3;
    s32 var_r2;
    u8 temp_r1;
    void *temp_r0;

    temp_ip                          = (arg1 * 0xC) + arg0;
    temp_r3                          = (arg2 * 0xC) + arg0;
    var_r2                           = 0;
    M2C_FIELD(temp_r3, s32 *, 0xAEC) = (s32) M2C_FIELD(temp_ip, s32 *, 0xAEC);
    M2C_FIELD(temp_r3, u8 *, 0xAF0)  = (u8) M2C_FIELD(temp_ip, u8 *, 0xAF0);
    do {
        temp_r1 = M2C_FIELD((temp_ip + var_r2), u8 *, 0xAF1);
        temp_r0 = temp_r3 + var_r2;
        var_r2 += 1;
        M2C_FIELD(temp_r0, u8 *, 0xAF1) = temp_r1;
    } while (var_r2 < 5);
}
