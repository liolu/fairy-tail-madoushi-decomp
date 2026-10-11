#include "m2c.h"
#include "engine.h"

void func_02047ee0(M2C_UNK, M2C_UNK);

void func_02047f7c(s32 arg0, s32 arg1, s32 arg2) {
    func_02047ee0(arg0, arg2 | (arg1 & (-0x1000 << ((u32) (arg2 - 0x16) >> 1))) | 1);
}
