#include "m2c.h"
#include "engine.h"

M2C_UNK func_020041f4(void);

void func_020043d0(void) {
    s32 temp_r0;

    temp_r0 = func_020041f4();
    if (temp_r0 != 0) {
        M2C_FIELD(temp_r0, s32 *, 0x78) = 0;
    }
}
