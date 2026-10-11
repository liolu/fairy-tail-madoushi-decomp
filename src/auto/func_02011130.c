#include "m2c.h"

M2C_UNK func_020338a8(M2C_UNK, s32);                /* extern */
extern M2C_UNK data_020af8d8;
extern s32 data_020afaf0;

void func_02011130(M2C_UNK arg0) {
    if (data_020afaf0 == 0) {
        return;
    }
    func_020338a8(arg0, M2C_FIELD(&data_020af8d8, s32 *, 0x20));
}
