#include "m2c.h"
#include "engine.h"

extern M2C_UNK data_0214c738;

void func_02021e70(void) {
    s32 var_r1;

    var_r1 = M2C_FIELD(&data_0214c738, s32 *, 0x98) + 1;
    if (var_r1 >= 0x18) {
        var_r1 = 0x17;
    }
    M2C_FIELD(&data_0214c738, s8 *, 0xBA) = (s8) var_r1;
}
