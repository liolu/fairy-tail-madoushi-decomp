#include "engine.h"
#include "m2c.h"

void func_02019a1c(M2C_UNK);
void func_020212cc(void);

extern s32 data_02142500;
extern M2C_UNK data_02142518;

void func_02019aac(s32 arg0) {
    func_02019a1c(1);
    M2C_FIELD(&data_02142518, s32 *, 0x3C) = 0;
    M2C_FIELD(&data_02142518, s32 *, 0x2C) = 2;
    M2C_FIELD(&data_02142518, s32 *, 0x30) = arg0;
    M2C_FIELD(&data_02142518, s32 *, 0x34) = 0;
    M2C_FIELD(&data_02142518, s32 *, 0x48) = 0;
    M2C_FIELD(&data_02142518, s32 *, 0x40) = 0;
    if ((s32) data_02142500 < 0x4650) {
        return;
    }
    func_020212cc();
}
