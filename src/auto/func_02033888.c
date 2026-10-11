#include "m2c.h"
#include "engine.h"

void func_02049fcc(M2C_UNK);
void func_0204a168(M2C_UNK);
M2C_UNK func_0204a1d4(void);

void func_02033888(void) {
    s32 temp_r4;

    temp_r4 = func_0204a1d4();
    func_02049fcc(1);
    func_0204a168(temp_r4);
}
