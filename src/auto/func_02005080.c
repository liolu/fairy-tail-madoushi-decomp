#include "m2c.h"
#include "engine.h"

M2C_UNK func_02004f78(void);
void func_02004fbc(M2C_UNK);

void func_02005080(s32 arg0) {
    s32 var_r0;

    var_r0 = arg0;
    if ((var_r0 >= 0) && (var_r0 < 0x64)) {
        var_r0 = func_02004f78();
    }
    func_02004fbc(var_r0);
}
