/* compiler: 2.0/sp1p5 -flag no-opt_rebuildconditionals */
#include "m2c.h"

M2C_UNK func_0202997c(M2C_UNK);                     /* extern */
M2C_UNK func_0202998c();                            /* extern */
s32 func_0202a824();                                /* extern */
s32 func_02051ef8(M2C_UNK *);                       /* extern */
extern M2C_UNK data_0214e120;
extern M2C_UNK data_0214ef40;

s32 func_0202a7cc(void) {
    if (M2C_FIELD(&data_0214e120, s32 *, 0x18) != 6) {
        return 0;
    }
    func_0202997c(3);
    if (func_02051ef8(&data_0214ef40) != 0) {
        func_0202998c();
        return 0;
    }
    if (func_0202a824() == 0) {
        return 0;
    }
    return 1;
}
