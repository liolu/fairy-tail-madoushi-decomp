#include "m2c.h"
#include "engine.h"

void func_02006b60(M2C_UNK);
void func_02006cec(M2C_UNK, M2C_UNK);
void func_02016980(M2C_UNK);
void func_02016a30(M2C_UNK);
void func_02016dec(M2C_UNK);

void func_02008ef0(s32 arg0, s32 arg1) {
    void *temp_r4;

    temp_r4 = M2C_FIELD((arg0 + (arg1 * 4)), void **, 0x70);
    if (!(M2C_FIELD(temp_r4, s32 *, 4) & 2)) {
        return;
    }
    func_02006b60(arg0);
    func_02006cec(arg0, 1);
    func_02016980(M2C_FIELD(temp_r4, s32 *, 0x14));
    func_02016a30(M2C_FIELD(temp_r4, s32 *, 0x14));
    func_02016dec(M2C_FIELD(temp_r4, s32 *, 0x14));
}
