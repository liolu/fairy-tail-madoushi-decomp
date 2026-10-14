#include "engine.h"
#include "m2c.h"

void func_02027efc(void);

extern M2C_UNK data_0214e020;

void func_02028700(void) {
    M2C_FIELD(&data_0214e020, s32 *, 0x38) = 0;
    func_02027efc();
}
