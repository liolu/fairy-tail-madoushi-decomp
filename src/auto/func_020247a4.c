#include "engine.h"
#include "m2c.h"

extern s32 data_0214df00;
extern s32 data_0214df60;

void func_020247a4(void) {
    if (data_0214df00 != 0) {
        data_0214df60 = 1;
    }
}
