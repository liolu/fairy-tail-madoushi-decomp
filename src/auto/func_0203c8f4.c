/* func_0201abe4 from projets/livly-garden/src/auto/func_0201abe4.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_0203b710(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK *);
extern M2C_UNK func_0203c95c(M2C_UNK *);
void func_0203c8f4(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3, M2C_UNK *arg4) {
    u8 sp0[48];
    M2C_UNK *var_r4;

    var_r4 = arg4;
    if (var_r4 == ((void *) 0)) {
        var_r4 = sp0;
    }
    func_0203b710(arg0, arg1, arg2, var_r4);
    if (arg3 == 0) {
        return;
    }
    *(s32 *) 0x04000440 = 2;
    func_0203c95c(var_r4);
}
