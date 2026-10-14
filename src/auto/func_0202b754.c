#include "engine.h"
#include "m2c.h"

M2C_UNK func_0203fb04(M2C_UNK);

extern M2C_UNK data_02150e80;

s32 func_0202b754(void) {
    s32 var_r6;

    if (M2C_FIELD(&data_02150e80, u16 *, 0xA) == 0) {
        return 0;
    }
    var_r6 = 1;
loop_3:
    if ((M2C_FIELD(&data_02150e80, u16 *, 0xA) & (1 << var_r6)) && (func_0203fb04(var_r6) == 0)) {
        return 0;
    }
    var_r6 = (s32) (u16) (var_r6 + 1);
    if ((u32) var_r6 >= 0x10U) {
        return 1;
    }
    goto loop_3;
}
