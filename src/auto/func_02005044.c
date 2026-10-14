#include "engine.h"
#include "m2c.h"

M2C_UNK func_02004718(M2C_UNK);
M2C_UNK func_02004f78(void);

s32 func_02005044(s32 arg0) {
    s32 var_r0;

    var_r0 = arg0;
    if ((var_r0 >= 0) && (var_r0 < 0x64)) {
        var_r0 = func_02004f78();
    }
    if (var_r0 == 0) {
        return 0;
    }
    if (func_02004718(M2C_FIELD(var_r0, s32 *, 4)) != 0) {
        return 1;
    }
    return 0;
}
