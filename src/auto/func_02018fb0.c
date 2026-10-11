#include "m2c.h"
#include "engine.h"

M2C_UNK func_02003d04(void);
void func_02003f24(M2C_UNK, M2C_UNK);
void func_02004030(M2C_UNK);
void func_02004068(M2C_UNK);
void func_02017f98(M2C_UNK);
void func_02018020(void);
void func_02018574(void);
void func_02018aa8(void);
void func_02018d64(void);

void func_02018fb0(void) {
    func_02004068(0);
    func_02017f98(0xA);
    func_02018020();
    func_02018574();
    func_02004030((s32) func_02018aa8);
    func_02003f24(func_02003d04(), (s32) func_02018d64);
}
