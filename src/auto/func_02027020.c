#include "engine.h"
#include "m2c.h"

void func_020262fc(M2C_UNK, M2C_UNK);

void func_02027020(s32 arg0, s32 arg1) {
    if (arg1 == 0) {
        return;
    }
    *(M2C_UNK *) arg0 = 2;
    func_020262fc(arg0, 0);
}
