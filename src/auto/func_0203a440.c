#include "m2c.h"
#include "engine.h"

s32 func_0203a440(s32 arg0, s32 arg1, s32 arg2) {
    void *temp_r1;

    temp_r1 = M2C_FIELD(arg1, void **, 4);
    *(M2C_UNK *)arg2 = (s32) (M2C_FIELD(temp_r1, s32 *, 0xC) - M2C_FIELD(temp_r1, s32 *, 4));
    return 0;
}
