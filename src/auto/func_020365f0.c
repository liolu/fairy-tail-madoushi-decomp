#include "m2c.h"
#include "engine.h"

void func_02047624(void);
void func_02047630(M2C_UNK, M2C_UNK);

void func_020365f0(s32 arg0, s32 arg1, s32 arg2) {
    if ((u32) arg1 >= (u32) arg2) {
        func_02047624();
        return;
    }
    func_02047630(arg0, arg1);
}
