#include "m2c.h"

M2C_UNK func_02023c0c();                            /* extern */
M2C_UNK func_02024624(M2C_UNK);                     /* extern */
M2C_UNK func_02024a94(M2C_UNK);                     /* extern */
M2C_UNK func_02024dbc();                            /* extern */
extern s32 data_0214df18;

void func_02025e8c(M2C_UNK arg0) {
    func_02024dbc();
    func_02024a94(arg0);
    func_02024624(arg0);
    if (data_0214df18 != 0) {
        func_02023c0c();
    }
    data_0214df18 = 0;
}
