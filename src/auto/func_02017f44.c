#include "engine.h"
#include "m2c.h"

void func_02003ffc(M2C_UNK, M2C_UNK);
void func_02004068(M2C_UNK);
void func_02022aec(M2C_UNK);

void func_02017f44(s32 arg0) {
    if (arg0 == 0) {
        func_02022aec(2);
        func_02003ffc(0x28, 0);
    }
    func_02004068(0x20);
}
