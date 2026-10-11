#include "m2c.h"
#include "engine.h"

s32 func_0200b424(s32 arg0, s32 arg1) {
    s32 temp_r1;
    s32 temp_r1_2;
    s32 var_r0;
    void *temp_r3;

    temp_r3 = M2C_FIELD((arg0 + (arg1 * 4)), void **, 0x70);
    var_r0 = 0;
    temp_r1 = M2C_FIELD(temp_r3, s32 *, 0x50);
    switch (temp_r1) {                              /* irregular */
    case 1:
        temp_r1_2 = M2C_FIELD(temp_r3, s32 *, 0xC);
        if (temp_r1_2 < 0) {
            if ((s32) M2C_FIELD(temp_r3, s32 *, 0x54) >= (s32) M2C_FIELD(temp_r3, s32 *, 8)) {
                var_r0 = 1;
            }
            return var_r0;
        }
        if (temp_r1_2 <= 0) {
            return 0;
        }
        if ((s32) M2C_FIELD(temp_r3, s32 *, 0x54) <= (s32) M2C_FIELD(temp_r3, s32 *, 8)) {
            var_r0 = 1;
        }
        return var_r0;
    case 2:
        if (M2C_FIELD(temp_r3, s32 *, 4) & 0x10) {
            var_r0 = 1;
        }
        return var_r0;
    default:
        return -1;
    }
}
