#include "engine.h"
#include "m2c.h"

void func_02003f24(M2C_UNK, M2C_UNK);
void func_02004030(M2C_UNK);
void func_02004068(M2C_UNK);
void func_020287e4(M2C_UNK);
void func_0202884c(void);
void func_02029280(void);
void func_020296cc(void);
void func_02029788(void);

void func_02029848(void) {
    func_02004068(0);
    func_020287e4(0x100);
    func_0202884c();
    func_02029280();
    func_02004030((s32) func_020296cc);
    func_02003f24(0x10, (s32) func_02029788);
}
