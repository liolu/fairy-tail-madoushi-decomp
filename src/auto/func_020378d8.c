#include "m2c.h"
#include "engine.h"

void func_02046c74(M2C_UNK);
M2C_UNK func_02048ac0(void);
void func_02048ad4(M2C_UNK);

s32 func_020378d8(s32 arg0, s32 arg1) {
    s32 temp_r4;
    s32 var_r1;

    var_r1 = arg1;
    if (var_r1 == 0x100) {
        temp_r4 = func_02048ac0();
        if (!(M2C_FIELD(arg0, s32 *, 0xC) & 8)) {
            do {
                func_02046c74(arg0 + 0x18);
            } while (!(M2C_FIELD(arg0, s32 *, 0xC) & 8));
        }
        func_02048ad4(temp_r4);
        var_r1 = M2C_FIELD(arg0, s32 *, 0x14);
        M2C_FIELD(arg0, s32 *, 0xC) = (s32) (M2C_FIELD(arg0, s32 *, 0xC) & ~8);
    }
    return var_r1;
}
