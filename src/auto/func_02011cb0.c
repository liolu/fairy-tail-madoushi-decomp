#include "m2c.h"

M2C_UNK func_02045fd0(M2C_UNK, M2C_UNK *);          /* extern */
extern M2C_UNK func_02003344;

void func_02011cb0(M2C_UNK *arg0) {
    if (arg0 != NULL) {
        func_02045fd0(2, arg0);
        return;
    }
    func_02045fd0(2, &func_02003344);
}
