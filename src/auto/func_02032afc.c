#include "m2c.h"
#include "engine.h"

void func_0202c75c(M2C_UNK, M2C_UNK);
void func_02031e0c(M2C_UNK);

extern M2C_UNK data_02157748;

void func_02032afc(s32 arg0) {
    func_02031e0c(M2C_FIELD(arg0, s32 *, 0x48));
    func_0202c75c((s32) &data_02157748, arg0);
    M2C_FIELD(arg0, s32 *, 0x2C) = (s32) (M2C_FIELD(arg0, s32 *, 0x2C) & ~1);
}
