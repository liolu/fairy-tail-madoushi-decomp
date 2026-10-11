#include "m2c.h"

void *func_020041f4();                              /* extern */
M2C_UNK func_02038c00(void *);                      /* extern */
M2C_UNK func_0203921c(void *);                      /* extern */
extern M2C_UNK data_020a1ac0;

s32 func_020042dc(void) {
    s32 var_r0;
    void *temp_r0;

    temp_r0 = func_020041f4();
    if (temp_r0 == NULL) {
        return -1;
    }
    if (M2C_FIELD(temp_r0, s32 *, 0x3C) & 1) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    if (var_r0 == 1) {
        return 1;
    }
    func_02038c00(temp_r0 + 0x30);
    func_0203921c(temp_r0 + 4);
    M2C_FIELD(&data_020a1ac0, s32 *, 0x78) = 0;
    return 0;
}
