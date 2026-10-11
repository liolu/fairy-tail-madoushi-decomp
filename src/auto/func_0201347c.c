#include "m2c.h"
#include "engine.h"

extern M2C_UNK data_021405e0;

void func_0201347c(s32 arg0) {
    if (arg0 == -1) {
        M2C_FIELD(&data_021405e0, s32 *, 0x38) = -1;
        return;
    }
    M2C_FIELD(&data_021405e0, s32 *, 0x38) = (s32) (arg0 + 1);
}
