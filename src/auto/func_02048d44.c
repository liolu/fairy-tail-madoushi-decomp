#include "m2c.h"
#include "engine.h"

void func_02048d74(void);

extern M2C_UNK data_0215a538;

void func_02048d44(void) {
    M2C_UNK (*temp_r2)(s32);

    temp_r2 = M2C_FIELD(&data_0215a538, M2C_UNK (**)(s32), 0);
    if (temp_r2 != NULL) {
        M2C_FIELD(&data_0215a538, M2C_UNK (**)(s32), 0) = NULL;
        temp_r2(M2C_FIELD(&data_0215a538, s32 *, 4));
    }
    func_02048d74();
}
