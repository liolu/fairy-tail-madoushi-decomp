#include "m2c.h"
#include "engine.h"

void func_02045558(M2C_UNK, M2C_UNK, M2C_UNK);
void func_02047138(M2C_UNK, M2C_UNK, M2C_UNK);
void func_020475d8(M2C_UNK, M2C_UNK);
M2C_UNK func_02049000(M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK func_0204fb38(void);

extern M2C_UNK data_0215c4e4;

s32 func_0204fc44(s32 arg0, s32 arg1) {
    s32 temp_r0;
    s32 temp_r4;
    s32 var_r0;

    temp_r0 = func_0204fb38();
    if (temp_r0 == 0) {
        return 8;
    }
    func_02045558(arg0, temp_r0, arg1);
    func_020475d8(temp_r0, arg1);
    temp_r4 = func_02049000(0xA, temp_r0, 0);
    func_02047138((s32) &data_0215c4e4, temp_r0, 1);
    var_r0 = 8;
    if (temp_r4 >= 0) {
        var_r0 = 2;
    }
    return var_r0;
}
