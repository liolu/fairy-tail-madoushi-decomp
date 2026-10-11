#include "m2c.h"
#include "engine.h"

void func_02022530(void);
void func_020225dc(void);

extern M2C_UNK data_0214d67c;

void func_0202277c(s32 arg0) {
    M2C_FIELD(&data_0214d67c, s32 *, 8) = 0;
    if (arg0 == 0) {
        return;
    }
    func_020225dc();
    func_02022530();
}
