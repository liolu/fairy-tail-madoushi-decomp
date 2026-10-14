#include "engine.h"
#include "m2c.h"

void func_0202998c(M2C_UNK);
M2C_UNK func_02029ef4(void);
void func_0202b0c4(void);

void func_02029ec4(s32 arg0) {
    u16 temp_r0;

    temp_r0 = M2C_FIELD(arg0, u16 *, 2);
    if (temp_r0 != 0) {
        func_0202998c((s32) temp_r0);
        func_0202b0c4();
        return;
    }
    if (func_02029ef4() != 0) {
        return;
    }
    func_0202b0c4();
}
