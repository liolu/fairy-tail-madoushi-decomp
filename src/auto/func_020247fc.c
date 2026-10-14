#include "m2c.h"

M2C_UNK func_0202495c(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_0202498c(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
extern s32 data_0214df00;
extern s32 data_0214df60;

void func_020247fc(s32 arg0) {
    if ((data_0214df00 != 0) && (data_0214df60 != 0)) {
        switch (arg0) {                             /* irregular */
            case 0:
                func_0202495c(0, 1, 0, 0);
                return;
            case 1:
                func_0202498c(0, 1, 0, 0);
                return;
        }
    }
}
