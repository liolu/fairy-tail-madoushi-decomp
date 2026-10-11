#include "m2c.h"

M2C_UNK func_01ff8000(M2C_UNK, M2C_UNK, M2C_UNK, s32, s32); /* extern */
M2C_UNK func_02044e34();                            /* extern */
M2C_UNK func_020460e4(M2C_UNK, M2C_UNK (*)(s32), s32); /* extern */

void func_02044c30(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, u32 arg3, M2C_UNK (*arg4)(s32), s32 arg5, s32 arg6) {
    u32 temp_r3;
    u32 temp_r3_2;

    if (arg3 == 0) {
        if (arg4 == NULL) {
            return;
        }
        arg4(arg5);
        return;
    }
    func_02044e34();
    if (arg4 != NULL) {
        func_020460e4(arg0, arg4, arg5);
        temp_r3 = arg3 >> 2;
        if (arg6 != 0) {
            func_01ff8000(arg0, arg2, arg1, temp_r3 | 0xC5000000, 0x10);
            return;
        }
        func_01ff8000(arg0, arg2, arg1, temp_r3 | 0x45000000, 0x14);
        return;
    }
    temp_r3_2 = arg3 >> 2;
    if (arg6 != 0) {
        func_01ff8000(arg0, arg2, arg1, temp_r3_2 | 0x85000000, 0x10);
        return;
    }
    func_01ff8000(arg0, arg2, arg1, temp_r3_2 | 0x05000000, 0x14);
}
