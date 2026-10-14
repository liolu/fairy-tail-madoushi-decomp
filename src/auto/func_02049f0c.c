#include "engine.h"
#include "m2c.h"

M2C_UNK func_02049e0c(M2C_UNK);
void func_02049fcc(M2C_UNK);
M2C_UNK func_0204a2c8(void);
void func_0204a36c(void);
M2C_UNK func_0204a394(void);
M2C_UNK func_0204a3dc(void);

s32 func_02049f0c(s32 arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;

    if (func_0204a3dc() == 0) {
        return 0;
    }
    temp_r0_3 = func_0204a394();
    if (temp_r0_3 != 0) {
        return temp_r0_3;
    }
    if (!(arg0 & 1)) {
        return 0;
    }
    if (func_0204a2c8() > 0) {
        do {

        } while (func_02049e0c(0) != 0);
        temp_r0_2 = func_0204a394();
        if (temp_r0_2 != 0) {
            return temp_r0_2;
        }
        goto block_12;
    }
    func_02049fcc(1);
block_12:
    func_0204a36c();
    do {
        func_02049e0c(1);
        temp_r0 = func_0204a394();
    } while (temp_r0 == 0);
    return temp_r0;
}
