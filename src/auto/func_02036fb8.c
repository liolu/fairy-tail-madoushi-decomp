#include "m2c.h"
#include "engine.h"

M2C_UNK func_02036f50(void);
void func_02037018(void);
void func_02046e4c(M2C_UNK);
M2C_UNK func_02048400(void);

extern s32 data_0215a1b4;

void func_02036fb8(s32 arg0) {
    if (!(arg0 & func_02036f50())) {
        return;
    }
    func_02037018();
    if (func_02036f50() & 0x20) {
        return;
    }
    do {
        if ((data_0215a1b4 != 0) && (func_02048400() != 0)) {
            func_02046e4c(1);
        }
    } while (!(func_02036f50() & 0x20));
}
