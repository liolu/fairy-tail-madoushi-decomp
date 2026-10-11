#include "m2c.h"

void func_0200b350(s32 arg0, s32 arg1, s32 *arg2, s32 *arg3) {
    void *temp_r1;

    temp_r1 = M2C_FIELD((arg0 + (arg1 * 4)), void **, 0x70);
    if (M2C_FIELD(temp_r1, s32 *, 0x18) != 0) {
        if (arg2 != NULL) {
            *arg2 = (s32) M2C_FIELD(temp_r1, s16 *, 0x3E);
        }
        if (arg3 != NULL) {
            *arg3 = (s32) M2C_FIELD(temp_r1, s16 *, 0x40);
        }
        return;
    }
    if (arg2 != NULL) {
        *arg2 = 0;
    }
    if (arg3 != NULL) {
        *arg3 = 0;
    }
}
