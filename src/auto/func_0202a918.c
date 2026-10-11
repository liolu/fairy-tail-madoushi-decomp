#include "m2c.h"
#include "engine.h"

void func_0202997c(M2C_UNK);
void func_0202998c(M2C_UNK);

extern M2C_UNK data_0214e120;

void func_0202a918(s32 arg0) {
    if (M2C_FIELD(arg0, u16 *, 2) != 0) {
        func_0202997c(9);
        func_0202998c((s32) M2C_FIELD(arg0, u16 *, 2));
        return;
    }
    if (M2C_FIELD(&data_0214e120, M2C_UNK (**)(), 0x2C) != NULL) {
        M2C_FIELD(&data_0214e120, M2C_UNK (**)(), 0x2C)(arg0);
    }
    func_0202997c(1);
}
