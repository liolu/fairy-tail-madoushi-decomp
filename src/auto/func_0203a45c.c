#include "engine.h"
#include "m2c.h"

M2C_UNK func_0203a9d0(M2C_UNK);

void func_0203a45c(s32 arg0) {
    void *temp_r4;

    temp_r4 = M2C_FIELD(arg0, void **, 0x20);
    func_0203a9d0(arg0);
    M2C_FIELD(temp_r4, s32 *, 0)    = 0;
    M2C_FIELD(temp_r4, s32 *, 4)    = 0;
    M2C_FIELD(temp_r4, s32 *, 8)    = 0;
    M2C_FIELD(temp_r4, s32 *, 0xC)  = 0;
    M2C_FIELD(temp_r4, s32 *, 0x10) = 0;
    M2C_FIELD(temp_r4, s32 *, 0x14) = 0;
    M2C_FIELD(temp_r4, s32 *, 0x18) = 0;
}
