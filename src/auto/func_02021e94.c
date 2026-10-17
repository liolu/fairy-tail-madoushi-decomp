#include "m2c.h"

s32 func_02005ddc(M2C_UNK);                         /* extern */
extern M2C_UNK data_0207c52e;
extern M2C_UNK data_0214c738;

void func_02021e94(void) {
    s16 temp_r1;
    s32 var_r7;

    if ((s32) (M2C_FIELD(&data_0214c738, s32 *, 0x98) + 1) < 0x17) {
        return;
    }
    var_r7 = 0;
loop_3:
    temp_r1 = *((u16 *) ((s8 *) &data_0207c52e + (func_02005ddc(9) * 2)));
    if (temp_r1 == M2C_FIELD(&data_0214c738, s16 *, 0xBC)) {
        var_r7 += 1;
        if (var_r7 < 0x64) {
            goto loop_3;
        }
    }
    M2C_FIELD(&data_0214c738, s16 *, 0xBC) = temp_r1;
}
