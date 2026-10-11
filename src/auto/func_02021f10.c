/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern M2C_UNK data_0214c738;

void func_02021f10(s32 arg0) {
    if ((s32) M2C_FIELD(&data_0214c738, s32 *, 0x2C0) >= 0x3E7) {
        return;
    }
    M2C_FIELD(&data_0214c738, s32 *, 0x2C0) = (s32) (M2C_FIELD(&data_0214c738, s32 *, 0x2C0) + 1);
    switch (arg0) {                                 /* irregular */
    case 1:
        M2C_FIELD(&data_0214c738, s32 *, 0x2C8) = (s32) (M2C_FIELD(&data_0214c738, s32 *, 0x2C8) + 1);
        return;
    case 0:
        M2C_FIELD(&data_0214c738, s32 *, 0x2C4) = (s32) (M2C_FIELD(&data_0214c738, s32 *, 0x2C4) + 1);
        return;
    }
}
