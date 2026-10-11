#include "m2c.h"

M2C_UNK func_02043c04();                            /* extern */
extern M2C_UNK data_0215a090;

void func_02043dd4(s32 arg0) {
    M2C_FIELD(M2C_FIELD(&data_0215a090, void **, 0x10), s32 *, 0x1320) = 1;
    func_02043c04(arg0);
}
