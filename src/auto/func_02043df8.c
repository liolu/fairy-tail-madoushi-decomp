#include "engine.h"
#include "m2c.h"

void func_0204428c(M2C_UNK, M2C_UNK);
M2C_UNK func_020508d4(M2C_UNK);

extern M2C_UNK data_0215a090;

s32 func_02043df8(void) {
    s32 var_r4;

    var_r4 = func_020508d4(M2C_FIELD(M2C_FIELD(&data_0215a090, void **, 0xC), s32 *, 0x508));
    func_0204428c(1, var_r4);
    if (var_r4 == 2) {
        var_r4 = 0;
    }
    return var_r4;
}
