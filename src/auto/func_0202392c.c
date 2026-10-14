#include "engine.h"
#include "m2c.h"

void func_02047138(M2C_UNK, M2C_UNK, M2C_UNK);

extern M2C_UNK data_0214d694;
extern M2C_UNK data_0214d6b4;

void func_0202392c(void) {
    if ((M2C_FIELD(&data_0214d694, s32 *, 0) != 0) && (M2C_FIELD(&data_0214d694, s32 *, 4) != 0)) {
        M2C_FIELD(&data_0214d694, s32 *, 4) = 0;
        func_02047138((s32) &data_0214d6b4, 0x12345, 1);
    }
}
