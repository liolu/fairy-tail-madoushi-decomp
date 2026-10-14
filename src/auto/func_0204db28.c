#include "engine.h"
#include "m2c.h"

M2C_UNK func_02048ac0(void);
void func_02048ad4(M2C_UNK);

s32 func_0204db28(s32 arg0) {
    s32 temp_r0;
    s32 var_r4;
    void *var_r1;

    var_r4  = 0;
    temp_r0 = func_02048ac0();
    var_r1  = M2C_FIELD(arg0, void **, 0x2F4);
    if (var_r1 != NULL) {
        do {
            var_r1 = M2C_FIELD(var_r1, void **, 0x28);
            var_r4 += 1;
        } while (var_r1 != NULL);
    }
    func_02048ad4(temp_r0);
    return var_r4;
}
