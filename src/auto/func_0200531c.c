#include "m2c.h"
#include "engine.h"

M2C_UNK func_02004718(M2C_UNK);
M2C_UNK func_020051ac(void);

s32 func_0200531c(s32 arg0) {
    s32 var_r0;

    var_r0 = arg0;
    if ((var_r0 >= 0) && (var_r0 < 0x64)) {
        var_r0 = func_020051ac();
    }
    if ((var_r0 != 0) && (M2C_FIELD(var_r0, s32 *, 0xC) == 1)) {
        return func_02004718(M2C_FIELD(var_r0, s32 *, 0x10));
    }
    return 0;
}
