#include "m2c.h"
#include "engine.h"

void func_0202c610(M2C_UNK, M2C_UNK);
M2C_UNK func_0203384c(M2C_UNK);

s32 func_02033818(s32 arg0, s32 arg1) {
    func_0202c610(arg0 + 4, 0xC);
    *(M2C_UNK *)arg0 = arg1;
    if (func_0203384c(arg0) != 0) {
        return 1;
    }
    return 0;
}
