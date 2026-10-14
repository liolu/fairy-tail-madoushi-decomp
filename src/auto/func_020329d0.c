#include "engine.h"
#include "m2c.h"

void func_02032a88(M2C_UNK);

void func_020329d0(s32 arg0) {
    if (((s32) (M2C_FIELD(arg0, s32 *, 0x2C) << 0x1F) >> 0x1F) == 0) {
        return;
    }
    func_02032a88(arg0);
}
