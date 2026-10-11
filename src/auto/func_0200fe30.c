#include "m2c.h"
#include "engine.h"

void func_0200f8d8(M2C_UNK);
void func_0200fc84(M2C_UNK);

extern M2C_UNK data_020a54e4;

void func_0200fe30(s32 arg0) {
    if (M2C_FIELD(((arg0 * 0x2C) + M2C_FIELD(&data_020a54e4, s32 *, 0xC)), s32 *, 0x20) == 2) {
        func_0200fc84(arg0);
    }
    func_0200f8d8(arg0);
}
