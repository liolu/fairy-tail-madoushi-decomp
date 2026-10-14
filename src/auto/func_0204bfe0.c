#include "engine.h"
#include "m2c.h"

M2C_UNK func_0203c63c(void);
void func_0203c64c(void);
M2C_UNK func_0204bde0(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);

s32 func_0204bfe0(s32 arg0) {
    s32 var_r4;

    var_r4 = arg0;
    if (var_r4 != 1) {
        var_r4 = 0;
        if (func_0203c63c() != 0) {
            func_0203c64c();
        }
    }
    return func_0204bde0(var_r4, 0, 0, 1);
}
