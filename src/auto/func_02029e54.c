#include "m2c.h"

M2C_UNK func_0202998c();                            /* extern */
s32 func_02029e94();                                /* extern */
M2C_UNK func_0202b0c4();                            /* extern */
s32 func_02051ef8(M2C_UNK *);                       /* extern */
extern M2C_UNK data_0214ef40;

s32 func_02029e54(void) {
    if (func_02051ef8(&data_0214ef40) != 0) {
        func_0202998c();
        return 0;
    }
    if (func_02029e94() != 0) {
        return 1;
    }
    func_0202b0c4();
    return 0;
}
