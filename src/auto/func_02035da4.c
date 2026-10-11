#include "m2c.h"
#include "engine.h"

M2C_UNK func_02038cf0(M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK func_02038d1c(M2C_UNK, M2C_UNK, M2C_UNK);

void func_02035da4(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_02038cf0(arg0 + 0x64, M2C_FIELD(arg0, s32 *, 0xAC) + arg3, 0);
    func_02038d1c(arg0 + 0x64, arg1, arg2);
}
