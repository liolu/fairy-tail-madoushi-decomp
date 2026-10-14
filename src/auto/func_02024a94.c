#include "engine.h"
#include "m2c.h"

void func_02024778(M2C_UNK);

extern s32 data_0214df00;

void func_02024a94(void) {
    if (data_0214df00 != 0) {
        func_02024778(0);
    }
    data_0214df00 = 0;
}
