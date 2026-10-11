#include "m2c.h"
#include "engine.h"

void func_02043e3c(void);
M2C_UNK func_02048ac0(void);
void func_02048ad4(M2C_UNK);
void func_02048d44(void);

extern M2C_UNK data_0215a090;

void func_02043ecc(void) {
    s32 temp_r4;

    temp_r4 = func_02048ac0();
    if (M2C_FIELD(M2C_FIELD(&data_0215a090, void **, 0x10), s32 *, 0x1320) == 0) {
        func_02048d44();
    }
    func_02043e3c();
    func_02048ad4(temp_r4);
}
