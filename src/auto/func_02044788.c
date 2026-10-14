#include "engine.h"
#include "m2c.h"

void func_020454c4(M2C_UNK, M2C_UNK, M2C_UNK);

extern M2C_UNK data_0215a108;

void func_02044788(s32 arg0) {
    M2C_FIELD(&data_0215a108, s32 *, 4) = arg0;
    func_020454c4(arg0, 0, 0x21C);
}
