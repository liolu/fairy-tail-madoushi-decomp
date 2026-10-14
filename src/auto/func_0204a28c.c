#include "engine.h"
#include "m2c.h"

M2C_UNK func_02048ac0(void);
void func_02048ad4(M2C_UNK);

extern M2C_UNK data_0215a608;

s32 func_0204a28c(void) {
    M2C_UNK *var_r1;
    s32 temp_r0;
    s32 var_r4;

    temp_r0 = func_02048ac0();
    var_r4  = 0;
    var_r1  = M2C_FIELD(&data_0215a608, M2C_UNK **, 8);
    if (var_r1 != NULL) {
        do {
            var_r1 = *var_r1;
            var_r4 += 1;
        } while (var_r1 != NULL);
    }
    func_02048ad4(temp_r0);
    return var_r4;
}
