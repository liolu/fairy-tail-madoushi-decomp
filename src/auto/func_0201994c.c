#include "m2c.h"
#include "engine.h"

void func_02019400(M2C_UNK);
void func_02019490(void);

extern M2C_UNK data_02142518;

void func_0201994c(void) {
    M2C_FIELD(&data_02142518, s32 *, 0x58) = 0;
    M2C_FIELD(&data_02142518, s32 *, 0x5C) = 0;
    M2C_FIELD(&data_02142518, s32 *, 0x60) = 0;
    M2C_FIELD(&data_02142518, s32 *, 0x64) = 0;
    M2C_FIELD(&data_02142518, s32 *, 0x68) = 0;
    M2C_FIELD(&data_02142518, s32 *, 0x6C) = 0;
    M2C_FIELD(&data_02142518, s32 *, 0x70) = 0x182;
    func_02019400(1);
    func_02019490();
}
