#include "m2c.h"

M2C_UNK func_0202997c(M2C_UNK);                     /* extern */
M2C_UNK func_0202998c();                            /* extern */
s32 func_02050954(M2C_UNK *, M2C_UNK *);            /* extern */
extern M2C_UNK data_0214e1c0;
extern M2C_UNK func_020299e8;

s32 func_020299a8(void) {
    func_0202997c(3);
    if (func_02050954(&func_020299e8, &data_0214e1c0) == 2) {
        return 1;
    }
    func_0202998c();
    func_0202997c(9);
    return 0;
}
