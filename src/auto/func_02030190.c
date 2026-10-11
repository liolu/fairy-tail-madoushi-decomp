#include "m2c.h"
#include "engine.h"

void func_0202fd3c(M2C_UNK, M2C_UNK, M2C_UNK);

void func_02030190(s32 arg0) {
    s32 temp_r0;
    s32 var_r0;
    s32 var_r1;
    s32 var_r2;

    temp_r0 = *(M2C_UNK *)arg0;
    if (!(temp_r0 & 4)) {
        if (!(temp_r0 & 2)) {
            var_r1 = arg0 + 0x28;
            var_r0 = 0x19;
            var_r2 = 0xC;
        } else {
            var_r1 = arg0 + 0x4C;
            var_r0 = 0x1C;
            var_r2 = 3;
        }
        goto block_6;
    }
    if (!(temp_r0 & 2)) {
        var_r1 = arg0 + 0x28;
        var_r0 = 0x1A;
        var_r2 = 9;
block_6:
        func_0202fd3c(var_r0, var_r1, var_r2);
    }
    if (*(M2C_UNK *)arg0 & 1) {
        return;
    }
    func_0202fd3c(0x1B, arg0 + 4, 3);
}
