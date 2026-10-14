#include "m2c.h"

M2C_UNK func_02048b3c(s32);                         /* extern */
s32 func_0204b8c8(M2C_UNK, M2C_UNK);                /* extern */
s32 func_0204bfe0(M2C_UNK);                         /* extern */
s32 func_0204c01c();                                /* extern */
extern s32 data_020a120c;

void func_0204c1f8(void) {
    s32 temp_r4;

    func_02048b3c(0x360000);
    temp_r4       = data_020a120c;
    data_020a120c = 0xE;
    if (func_0204c01c() != 1) {
        if (func_0204b8c8(2, 0) != 0) {
            do {
                func_02048b3c(0x51D23);
            } while (func_0204b8c8(2, 0) != 0);
        }
        if (func_0204bfe0(1) == 0) {
            do {
                func_02048b3c(5);
            } while (func_0204bfe0(1) == 0);
        }
    }
    data_020a120c = temp_r4;
}
