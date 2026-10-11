#include "m2c.h"
#include "engine.h"

void func_02049be8(M2C_UNK, M2C_UNK);
void func_0204aa50(M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK func_0204aa84(M2C_UNK, M2C_UNK);

void func_02034190(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (arg0 == func_0204aa84(arg2, arg3)) {
        func_0204aa50(arg2, arg3, 0);
    }
    func_02049be8(arg0, arg0 + arg1);
}
