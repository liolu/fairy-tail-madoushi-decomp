#include "m2c.h"
#include "engine.h"

void func_02022500(M2C_UNK);
void func_02022584(void);

extern M2C_UNK data_0214d67c;

void func_02022758(void) {
    M2C_FIELD(&data_0214d67c, s32 *, 8) = 0;
    func_02022500(4);
    func_02022584();
}
