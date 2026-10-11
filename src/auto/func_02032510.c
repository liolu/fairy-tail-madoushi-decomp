#include "m2c.h"
#include "engine.h"

void func_020325b4(M2C_UNK);
void func_02049928(M2C_UNK);
void func_020499b0(M2C_UNK, M2C_UNK);

void func_02032510(s32 arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x2C) == 2) {
        func_020499b0((s32) M2C_FIELD(arg0, u8 *, 0x3C), -0x2D3);
    }
    func_02049928((s32) M2C_FIELD(arg0, u8 *, 0x3C));
    func_020325b4(arg0);
}
