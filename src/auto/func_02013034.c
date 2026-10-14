#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_021405e0;

void func_02013034(void) {
    if (M2C_FIELD(&data_021405e0, s32 *, 0) == 0) {
        M2C_FIELD(&data_021405e0, s32 *, 0x30) = 0;
        return;
    }
    M2C_FIELD(&data_021405e0, s32 *, 0x30) = 0xA;
    if (M2C_FIELD(&data_021405e0, M2C_UNK(**)(M2C_UNK), 0xDD0) == NULL) {
        return;
    }
    M2C_FIELD(&data_021405e0, M2C_UNK(**)(M2C_UNK), 0xDD0)(0);
}
