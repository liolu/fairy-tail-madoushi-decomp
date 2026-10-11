#include "m2c.h"
#include "engine.h"

void func_02026920(M2C_UNK);

extern s32 data_0214df18;

void func_02024dbc(void) {
    if (data_0214df18 == 0) {
        return;
    }
    func_02026920(0);
    func_02026920(1);
}
