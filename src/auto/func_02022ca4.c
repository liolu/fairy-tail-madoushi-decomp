#include "m2c.h"
#include "engine.h"

void func_02013700(M2C_UNK, M2C_UNK, M2C_UNK);

extern M2C_UNK data_0214c738;
extern M2C_UNK data_0214d800;
extern M2C_UNK data_0214d900;

void func_02022ca4(void) {
    switch (M2C_FIELD(&data_0214c738, s32 *, 0x2D0)) { /* irregular */
    case 0:
        return;
    case 1:
    case 2:
        func_02013700((s32) &data_0214d800, (s32) &data_0214d900, 0x20);
        return;
    }
}
