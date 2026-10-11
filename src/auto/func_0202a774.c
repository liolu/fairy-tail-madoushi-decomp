#include "m2c.h"

M2C_UNK func_0202997c(M2C_UNK);                     /* extern */
M2C_UNK func_0202998c();                            /* extern */
s32 func_02051edc(M2C_UNK *, M2C_UNK);              /* extern */
extern M2C_UNK data_0214e120;
extern M2C_UNK data_0214ef40;

s32 func_0202a774(void) {
    if (M2C_FIELD(&data_0214e120, s32 *, 0x18) == 6) {
        return 1;
    }
    if (M2C_FIELD(&data_0214e120, s32 *, 0x18) != 4) {
        return 0;
    }
    func_0202997c(6);
    if (func_02051edc(&data_0214ef40, 0xD) == 0) {
        return 1;
    }
    func_0202998c();
    return 0;
}
