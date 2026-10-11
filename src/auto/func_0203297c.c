#include "m2c.h"
#include "engine.h"

void func_02049a08(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
void func_0204c164(M2C_UNK);
void func_0204c184(M2C_UNK);

void func_0203297c(s32 arg0) {
    func_02049a08(M2C_FIELD(arg0, s32 *, 0x4C), 0, 1 << M2C_FIELD(arg0, s32 *, 0x48), 0);
    if (((s32) (M2C_FIELD(arg0, s32 *, 0x2C) << 0x1E) >> 0x1F) != 0) {
        return;
    }
    func_0204c164(arg0 + 8);
    func_0204c184(arg0 + 0x18);
    M2C_FIELD(arg0, s32 *, 0x2C) = (s32) (M2C_FIELD(arg0, s32 *, 0x2C) | 2);
}
