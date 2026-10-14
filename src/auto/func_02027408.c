#include "engine.h"
#include "m2c.h"

void func_02026174(void);
void func_020262c0(void);

extern s32 data_0214e020;

void func_02027408(void) {
    if (data_0214e020 != 0) {
        func_020262c0();
        func_02026174();
    }
    data_0214e020 = 0;
}
