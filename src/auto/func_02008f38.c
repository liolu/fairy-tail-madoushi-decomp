#include "m2c.h"
#include "engine.h"

void func_02017974(M2C_UNK);

void func_02008f38(s32 arg0, s32 arg1) {
    void *temp_r1;

    temp_r1 = M2C_FIELD((arg0 + (arg1 * 4)), void **, 0x70);
    if (!(M2C_FIELD(temp_r1, s32 *, 4) & 2)) {
        return;
    }
    func_02017974(M2C_FIELD(temp_r1, s32 *, 0x14));
}
