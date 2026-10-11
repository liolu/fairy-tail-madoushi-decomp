#include "m2c.h"
#include "engine.h"

void func_0202a99c(M2C_UNK, M2C_UNK);
void func_02048c04(M2C_UNK);

extern M2C_UNK data_021405e0;
extern M2C_UNK data_02141670;
extern M2C_UNK data_02141674;

void func_0201261c(void) {
    func_02048c04((s32) &data_02141670);
    func_0202a99c((s32) &data_02141674, 0x14);
    M2C_FIELD(&data_021405e0, s32 *, 0xC) = 0;
}
