#include "engine.h"
#include "m2c.h"

void func_02004330(M2C_UNK);

extern M2C_UNK data_020a1ac0;

void func_02004364(void) {
    s32 temp_r0;
    s32 var_r6;
    void *var_r7;

    var_r6 = 0;
    var_r7 = M2C_FIELD(&data_020a1ac0, void **, 0x70);
    if ((s32) M2C_FIELD(&data_020a1ac0, s32 *, 0x74) <= 0) {
        return;
    }
    do {
        temp_r0 = M2C_FIELD(var_r7, s32 *, 0);
        if ((temp_r0 != -1) && (M2C_FIELD(var_r7, s32 *, 0x78) != 0)) {
            func_02004330(temp_r0);
        }
        var_r6 += 1;
        var_r7 += 0x7C;
    } while (var_r6 < (s32) M2C_FIELD(&data_020a1ac0, s32 *, 0x74));
}
