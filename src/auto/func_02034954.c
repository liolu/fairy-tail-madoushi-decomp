#include "engine.h"
#include "m2c.h"

void func_02034954(s32 arg0) {
    void *temp_r2;

    temp_r2 = *(M2C_UNK *) arg0;
    if (temp_r2 != NULL) {
        M2C_FIELD(temp_r2, s32 *, 0x154) = 0;
        *(M2C_UNK *) arg0                = NULL;
    }
}
