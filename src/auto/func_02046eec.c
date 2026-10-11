#include "m2c.h"
#include "engine.h"

void func_02046d2c(M2C_UNK);

void func_02046eec(s32 arg0) {
    void *temp_r2;

    temp_r2 = *(M2C_UNK *)arg0;
    *(M2C_UNK *)arg0 = NULL;
    M2C_FIELD(temp_r2, s32 *, 0xB0) = 0;
    func_02046d2c((s32) temp_r2);
}
