#include "m2c.h"
#include "engine.h"

s32 func_02038668(s32 arg0) {
    s32 var_r0;

    var_r0 = arg0;
    if (M2C_FIELD(var_r0, s8 *, 3) != 0) {
        var_r0 = M2C_FIELD(var_r0, s32 *, 0);
    }
    return var_r0;
}
