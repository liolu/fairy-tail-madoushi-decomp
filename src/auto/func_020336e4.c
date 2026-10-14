#include "engine.h"
#include "m2c.h"

void func_0202c75c(M2C_UNK, M2C_UNK);
M2C_UNK func_0202c7d4(M2C_UNK, M2C_UNK);
void func_0202cac0(M2C_UNK, M2C_UNK);
M2C_UNK func_0203384c(M2C_UNK);
void func_02033888(void);

void func_020336e4(s32 arg0) {
    M2C_UNK (*temp_ip)(s32, s32, s32, s32);
    s32 var_r5;
    s32 var_r6;
    s32 var_r7;

    var_r6 = 0;
    var_r5 = func_0202c7d4(arg0 + 4, 0);
    if (var_r5 != 0) {
        do {
            var_r7 = func_0202c7d4(var_r5, 0);
            if (var_r7 != 0) {
                do {
                    temp_ip = M2C_FIELD(var_r7, M2C_UNK(**)(s32, s32, s32, s32), 0xC);
                    if (temp_ip != NULL) {
                        temp_ip(var_r7 + 0x20, M2C_FIELD(var_r7, s32 *, 8), M2C_FIELD(var_r7, s32 *, 0x10),
                                M2C_FIELD(var_r7, s32 *, 0x14));
                        var_r6 = 1;
                    }
                    var_r7 = func_0202c7d4(var_r5, var_r7);
                } while (var_r7 != 0);
            }
            func_0202c75c(arg0 + 4, var_r5);
            var_r5 = func_0202c7d4(arg0 + 4, 0);
        } while (var_r5 != 0);
    }
    func_0202cac0(*(M2C_UNK *) arg0, 3);
    if (var_r6 != 0) {
        func_02033888();
    }
    func_0203384c(arg0);
}
