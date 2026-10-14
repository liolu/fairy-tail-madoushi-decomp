#include "engine.h"
#include "m2c.h"

void func_020475d8(M2C_UNK, M2C_UNK);
void func_02049d14(void);
void func_02049d28(void);

void func_0204a834(s32 arg0) {
    void *temp_r6;
    void *var_r0;

    func_02049d14();
    var_r0 = M2C_FIELD(arg0, void **, 0x18);
    if (var_r0 != NULL) {
        do {
            temp_r6                       = M2C_FIELD(var_r0, void **, 4);
            M2C_FIELD(var_r0, s32 *, 0)   = 0;
            M2C_FIELD(var_r0, void **, 4) = NULL;
            func_020475d8((s32) var_r0, 8);
            var_r0 = temp_r6;
        } while (temp_r6 != NULL);
    }
    func_02049d28();
}
