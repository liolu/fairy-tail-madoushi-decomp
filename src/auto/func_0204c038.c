#include "m2c.h"
#include "engine.h"

M2C_UNK func_02048ac0(void);
void func_02048ad4(M2C_UNK);

void func_0204c038(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_r0;
    void *var_r2;
    void *var_r3;

    if (arg0 == 0) {
        return;
    }
    M2C_FIELD(arg1, s32 *, 8) = arg2;
    temp_r0 = func_02048ac0();
    var_r2 = *(M2C_UNK *)arg0;
    var_r3 = NULL;
    if (var_r2 != NULL) {
loop_3:
        if (((arg3 != 0) || ((s32) M2C_FIELD(var_r2, s32 *, 8) <= arg2)) && ((arg3 != 1) || ((s32) M2C_FIELD(var_r2, s32 *, 8) < arg2))) {
            var_r3 = var_r2;
            var_r2 = M2C_FIELD(var_r2, void **, 0xC);
            if (var_r2 != NULL) {
                goto loop_3;
            }
        }
    }
    if (var_r2 != NULL) {
        M2C_FIELD(arg1, void **, 0xC) = var_r2;
    } else {
        M2C_FIELD(arg1, void **, 0xC) = NULL;
    }
    if (var_r3 != NULL) {
        M2C_FIELD(var_r3, s32 *, 0xC) = arg1;
    } else {
        *(M2C_UNK *)arg0 = (void *) arg1;
    }
    func_02048ad4(temp_r0);
}
