#include "engine.h"
#include "m2c.h"

void func_0202450c(void);
void func_020249bc(void);
void func_02024de8(void);
void func_02025508(void);
void func_020259c4(void);

extern M2C_UNK data_0214df18;

void func_02025d9c(void) {
    if (M2C_FIELD(&data_0214df18, s32 *, 0) == 0) {
        return;
    }
    if (M2C_FIELD(&data_0214df18, s32 *, 0x18) == 1) {
        switch (M2C_FIELD(&data_0214df18, s32 *, 0x10)) { /* irregular */
            case 0:
                func_02024de8();
                break;
            case 1:
                func_02025508();
                break;
            default:
                func_020259c4();
                break;
        }
    }
    func_020249bc();
    func_0202450c();
}
