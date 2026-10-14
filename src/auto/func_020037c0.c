#include "engine.h"
#include "m2c.h"

void func_02031f14(M2C_UNK);

extern M2C_UNK data_020a1d4c;

void func_020037c0(void) {
    if (M2C_FIELD(&data_020a1d4c, s32 *, 0x44) == 0) {
        return;
    }
    func_02031f14(0);
}
