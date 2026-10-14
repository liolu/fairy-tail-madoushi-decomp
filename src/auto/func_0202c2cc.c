#include "engine.h"
#include "m2c.h"

void func_0204f480(M2C_UNK);

extern M2C_UNK data_02150ec0;

void func_0202c2cc(s32 arg0, s32 arg1) {
    if (arg1 != 1) {
        return;
    }
    func_0204f480(arg0);
    M2C_FIELD(&data_02150ec0, s32 *, 0) = 2;
    if (M2C_FIELD(&data_02150ec0, M2C_UNK(**)(M2C_UNK), 4) == NULL) {
        return;
    }
    M2C_FIELD(&data_02150ec0, M2C_UNK(**)(M2C_UNK), 4)(0);
}
