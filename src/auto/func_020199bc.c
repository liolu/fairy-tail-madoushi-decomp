#include "m2c.h"
#include "engine.h"

void func_02019430(void);
void func_02019500(void);
void func_02019810(void);

extern M2C_UNK data_02142518;

void func_020199bc(void) {
    if (M2C_FIELD(&data_02142518, s32 *, 0x4C) != 0) {
        func_02019810();
        func_02019500();
        func_02019430();
    }
    M2C_FIELD(&data_02142518, s32 *, 0x4C) = 0;
}
