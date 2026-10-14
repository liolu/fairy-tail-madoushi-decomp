#include "engine.h"
#include "m2c.h"

void func_0204ecfc(M2C_UNK, M2C_UNK);

void func_0204f030(s32 arg0, s32 arg1) {
    if (M2C_FIELD(arg1, s32 *, 4) != 0xA) {
        return;
    }
    if (M2C_FIELD(arg0, s32 *, 0xA68) == 0) {
        return;
    }
    func_0204ecfc(arg0, arg1);
}
