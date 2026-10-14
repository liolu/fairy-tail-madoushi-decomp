#include "engine.h"
#include "m2c.h"

void func_02047308(M2C_UNK);
void func_02049d3c(void);
void func_0204a41c(void);

extern s32 data_0215a5ec;
extern M2C_UNK data_0215a5f0;

void func_02049cdc(void) {
    if (data_0215a5ec != 0) {
        return;
    }
    data_0215a5ec = 1;
    func_02047308((s32) &data_0215a5f0);
    func_02049d3c();
    func_0204a41c();
}
