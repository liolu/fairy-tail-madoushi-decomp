#include "m2c.h"
#include "engine.h"

M2C_UNK func_02013250(void);
void func_02047138(M2C_UNK, M2C_UNK, M2C_UNK);

extern M2C_UNK data_020af8d8;
extern M2C_UNK data_020af920;

void func_02011450(s32 arg0) {
    if (func_02013250() != 0) {
        return;
    }
    if (M2C_FIELD(&data_020af8d8, s32 *, 8) == 0) {
        return;
    }
    M2C_FIELD(&data_020af8d8, s32 *, 0x14) = arg0;
    M2C_FIELD(&data_020af8d8, s32 *, 0x1C) = 1;
    func_02047138((s32) &data_020af920, 1, 1);
}
