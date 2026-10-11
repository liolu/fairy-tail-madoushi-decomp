#include "m2c.h"
#include "engine.h"

void func_0202997c(M2C_UNK);
void func_0202998c(M2C_UNK);
M2C_UNK func_0202a8e8(void);
M2C_UNK func_020515cc(M2C_UNK);

extern M2C_UNK data_0214e120;
extern M2C_UNK data_0214f760;

void func_0202b0c4(void) {
    s32 temp_r0;

    if (M2C_FIELD(&data_0214e120, s32 *, 0x18) == 5) {
        temp_r0 = func_020515cc((s32) &data_0214f760);
        if (temp_r0 != 0) {
            func_0202998c(temp_r0);
        }
    }
    if (func_0202a8e8() != 0) {
        return;
    }
    func_0202997c(0xA);
}
