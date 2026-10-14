#include "engine.h"
#include "m2c.h"

void func_0202ca08(M2C_UNK);
void func_0202ca1c(M2C_UNK);

void func_0202cac0(s32 arg0, s32 arg1) {
    if (arg1 & 1) {
        func_0202ca08(arg0);
    }
    if (!(arg1 & 2)) {
        return;
    }
    func_0202ca1c(arg0);
}
