#include "m2c.h"
#include "engine.h"

void func_02023820(void);
void func_0202383c(void);

extern M2C_UNK data_0214d694;

void func_0202398c(void) {
    M2C_FIELD(&data_0214d694, s32 *, 8) = 1;
    func_02023820();
    func_0202383c();
}
