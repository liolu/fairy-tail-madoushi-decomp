#include "engine.h"
#include "m2c.h"

void func_0202747c(M2C_UNK);
void func_020274e4(void);

extern M2C_UNK data_0214e020;

void func_02027870(void) {
    M2C_FIELD(&data_0214e020, s32 *, 0x2C) = 0;
    func_0202747c(1);
    func_020274e4();
}
