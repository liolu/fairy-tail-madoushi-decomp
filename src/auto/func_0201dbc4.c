#include "engine.h"
#include "m2c.h"

void func_02011570(M2C_UNK);

extern M2C_UNK data_0214c738;

void func_0201dbc4(void) {
    M2C_FIELD(&data_0214c738, s32 *, 0x2CC) = -1;
    func_02011570(-1);
}
