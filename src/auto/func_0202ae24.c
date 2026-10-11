#include "m2c.h"

M2C_UNK func_0202997c(M2C_UNK);                     /* extern */
M2C_UNK func_0202998c();                            /* extern */
s32 func_0205085c(M2C_UNK *, M2C_UNK *, M2C_UNK);   /* extern */
extern M2C_UNK data_0214ff80;
extern M2C_UNK func_0202ae68;

s32 func_0202ae24(void) {
    func_0202997c(3);
    if (func_0205085c(&data_0214ff80, &func_0202ae68, 2) == 2) {
        return 1;
    }
    func_0202998c();
    func_0202997c(0xA);
    return 0;
}
