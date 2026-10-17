#include "m2c.h"

M2C_UNK func_02038e04();                            /* extern */
M2C_UNK func_0203aafc(M2C_UNK);                            /* extern */
extern s32 data_02159f80;

void func_0203aca0(M2C_UNK arg0) {
    if (data_02159f80 != 0) {
        return;
    }
    data_02159f80 = 1;
    func_0203aafc(arg0);
    func_02038e04();
}
