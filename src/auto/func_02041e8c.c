#include "m2c.h"
#include "engine.h"

extern M2C_UNK data_02159fec;

void func_02041e8c(s32 arg0) {
    s32 var_r1;
    s32 var_r2;

    var_r2 = M2C_FIELD(&data_02159fec, s32 *, 0x18);
    if (var_r2 == 0) {
        M2C_FIELD(&data_02159fec, s32 *, 0x18) = arg0;
    } else {
        var_r1 = M2C_FIELD(var_r2, s32 *, 0x4BC);
        if (var_r1 != 0) {
            do {
                var_r2 = var_r1;
                var_r1 = M2C_FIELD(var_r1, s32 *, 0x4BC);
            } while (var_r1 != 0);
        }
        M2C_FIELD(var_r2, s32 *, 0x4BC) = arg0;
    }
    M2C_FIELD(arg0, s32 *, 0x4BC) = 0;
}
