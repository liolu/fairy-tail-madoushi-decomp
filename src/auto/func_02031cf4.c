#include "m2c.h"
#include "engine.h"

void func_02032e2c(void);
void func_02049a30(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
void func_02049fcc(M2C_UNK);
void func_0204a168(M2C_UNK);
M2C_UNK func_0204a1d4(void);

void func_02031cf4(void) {
    s32 temp_r4;

    func_02032e2c();
    func_02049a30(0, 0, 0, 0);
    temp_r4 = func_0204a1d4();
    func_02049fcc(1);
    func_0204a168(temp_r4);
}
