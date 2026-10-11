#include "m2c.h"
#include "engine.h"

void func_02034090(M2C_UNK, M2C_UNK, M2C_UNK);
void func_02049ba8(M2C_UNK, M2C_UNK);

void func_020340e8(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_02034090(arg0, arg2, arg3);
    func_02049ba8(arg0, arg0 + arg1);
}
