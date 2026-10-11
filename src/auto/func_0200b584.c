#include "m2c.h"

void func_0200b584(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    void *temp_r0;

    temp_r0 = M2C_FIELD((arg0 + (arg1 * 4)), void **, 0x70);
    if (arg2 <= 8) {
        M2C_FIELD(temp_r0, s32 *, 0x60) = 0;
    } else if (arg2 <= 0x10) {
        M2C_FIELD(temp_r0, s32 *, 0x60) = 1;
    } else if (arg2 <= 0x20) {
        M2C_FIELD(temp_r0, s32 *, 0x60) = 2;
    } else if (arg2 <= 0x40) {
        M2C_FIELD(temp_r0, s32 *, 0x60) = 3;
    } else if (arg2 <= 0x80) {
        M2C_FIELD(temp_r0, s32 *, 0x60) = 4;
    } else if (arg2 <= 0x100) {
        M2C_FIELD(temp_r0, s32 *, 0x60) = 5;
    } else if (arg2 <= 0x200) {
        M2C_FIELD(temp_r0, s32 *, 0x60) = 6;
    } else {
        M2C_FIELD(temp_r0, s32 *, 0x60) = 7;
    }
    if (arg3 <= 8) {
        M2C_FIELD(temp_r0, s32 *, 0x64) = 0;
        return;
    }
    if (arg3 <= 0x10) {
        M2C_FIELD(temp_r0, s32 *, 0x64) = 1;
        return;
    }
    if (arg3 <= 0x20) {
        M2C_FIELD(temp_r0, s32 *, 0x64) = 2;
        return;
    }
    if (arg3 <= 0x40) {
        M2C_FIELD(temp_r0, s32 *, 0x64) = 3;
        return;
    }
    if (arg3 <= 0x80) {
        M2C_FIELD(temp_r0, s32 *, 0x64) = 4;
        return;
    }
    if (arg3 <= 0x100) {
        M2C_FIELD(temp_r0, s32 *, 0x64) = 5;
        return;
    }
    if (arg3 <= 0x200) {
        M2C_FIELD(temp_r0, s32 *, 0x64) = 6;
        return;
    }
    M2C_FIELD(temp_r0, s32 *, 0x64) = 7;
}
