#include "m2c.h"
#include "engine.h"

void func_02013724(void);

extern M2C_UNK data_0214c738;

void func_02022ce4(void) {
    switch (M2C_FIELD(&data_0214c738, s32 *, 0x2D0)) { /* irregular */
    case 0:
        return;
    case 1:
    case 2:
        func_02013724();
        return;
    }
}
