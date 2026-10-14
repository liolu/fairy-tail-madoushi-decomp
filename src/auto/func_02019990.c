#include "engine.h"
#include "m2c.h"

void func_020193e8(void);

extern M2C_UNK data_02142518;

void func_02019990(void) {
    M2C_FIELD(&data_02142518, s32 *, 0x4C) = 0;
    M2C_FIELD(&data_02142518, s32 *, 0x74) = 0;
    M2C_FIELD(&data_02142518, s32 *, 0x78) = 0;
    M2C_FIELD(&data_02142518, s32 *, 0x7C) = 0;
    M2C_FIELD(&data_02142518, s32 *, 0x80) = 0;
    func_020193e8();
}
