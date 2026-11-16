/* compiler: 2.0/sp1p5 -flag opt_repositioncode */
#include "m2c.h"

extern M2C_UNK data_0215a508;

void func_020487a4(void *arg0) {
    void *temp_r1;
    void *temp_r2;

    if (arg0 == NULL) {
        return;
    }
    temp_r2 = M2C_FIELD(arg0, void **, 0x18);
    temp_r1 = M2C_FIELD(arg0, void **, 0x14);
    if (temp_r2 == NULL) {
        M2C_FIELD(&data_0215a508, void **, 0x10) = temp_r1;
    } else {
        M2C_FIELD(temp_r2, void **, 0x14) = temp_r1;
    }
    if (temp_r1 == NULL) {
        M2C_FIELD(&data_0215a508, void **, 0xC) = temp_r2;
        return;
    }
    M2C_FIELD(temp_r1, void **, 0x18) = temp_r2;
}
