#include "engine.h"
#include "m2c.h"

void func_0202a9d4(M2C_UNK, M2C_UNK);
void func_02048c04(M2C_UNK);

extern M2C_UNK data_021405e0;
extern M2C_UNK data_02141670;

void func_020124dc(void) {
    func_02048c04((s32) &data_02141670);
    func_0202a9d4((s32) &data_02141670, 0x54);
    M2C_FIELD(&data_021405e0, s32 *, 0xC) = 0;
}
