#include "m2c.h"

s32 *func_020035e0(M2C_UNK, M2C_UNK, s32);          /* extern */
s32 func_0203ac50(s32 *, s32);                      /* extern */
M2C_UNK func_0203aca0(M2C_UNK);                     /* extern */
extern M2C_UNK data_020a1ac0;

void func_02004424(s32 arg0) {
    s32 *var_r0;
    s32 temp_r0;
    s32 var_r2;

    var_r0                                  = func_020035e0(2, 0x20, arg0 * 0x88);
    M2C_FIELD(&data_020a1ac0, s32 **, 0x2C) = var_r0;
    M2C_FIELD(&data_020a1ac0, s32 *, 0x30)  = arg0;
    var_r2                                  = 0;
    if (arg0 > 0) {
        do {
            var_r2 += 1;
            *var_r0 = 0;
            var_r0  = (s32 *) ((s8 *) var_r0 + 0x88);
        } while (var_r2 < arg0);
    }
    func_0203aca0(-1);
    if (*(u16 *) 0x02FFFC40 == 2) {
        return;
    }
    temp_r0 = func_0203ac50(NULL, 0);
    func_0203ac50(func_020035e0(2, 0x20, temp_r0), temp_r0);
}
