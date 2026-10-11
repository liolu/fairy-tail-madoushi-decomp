#include "m2c.h"
#include "engine.h"

void func_020440fc(M2C_UNK, M2C_UNK, M2C_UNK);
void func_020475f4(M2C_UNK, M2C_UNK);
void func_02047618(void);

void func_02041bd8(s32 arg0, s32 arg1, s32 arg2) {
    func_020475f4(arg2, (arg0 + 0x1F) & ~0x1F);
    func_02047618();
    func_020440fc(arg2, arg0, arg1);
}
