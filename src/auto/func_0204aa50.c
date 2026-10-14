#include "engine.h"
#include "m2c.h"

void func_020475d8(M2C_UNK, M2C_UNK);
void func_02049d14(void);
void func_02049d28(void);

void func_0204aa50(s32 arg0, s32 arg1, s32 arg2) {
    func_02049d14();
    M2C_FIELD((arg0 + (arg1 * 4)), s32 *, 0x3C) = arg2;
    func_020475d8(arg0 + 0x3C + (arg1 * 4), 4);
    func_02049d28();
}
