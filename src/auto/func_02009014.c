#include "m2c.h"
#include "engine.h"

void func_0202fea4(void);

extern M2C_UNK data_020a1ac0;

void func_02009014(void) {
    M2C_FIELD(&data_020a1ac0, s32 *, 0x1BC) = 0;
    M2C_FIELD(&data_020a1ac0, s32 *, 0x1C8) = 0;
    func_0202fea4();
}
