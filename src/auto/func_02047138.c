/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02047138 from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/os/calls/func_02047138.c (license: CC0-1.0),
 * reused by tools/donor_match.py */
extern int func_02048ac0(void);
extern void func_02048ad4(int state);
extern void func_02046c74(void *queue);
extern void func_02046cc4(void *queue);
extern long long func_02056c88(int a, int b);
int func_02047138(char *q, void *msg, int flags) {
    int enabled = func_02048ac0();
    while (*(int *) (q + 0x14) <= *(int *) (q + 0x1c)) {
        if ((flags & 1) == 0) {
            func_02048ad4(enabled);
            return 0;
        }
        func_02046c74(q);
    }
    (*(void ***) (q + 0x10))[(int) (func_02056c88(*(int *) (q + 0x18) + *(int *) (q + 0x1c), *(int *) (q + 0x14)) >> 32)] =
        msg;
    *(int *) (q + 0x1c) = *(int *) (q + 0x1c) + 1;
    func_02046cc4(q + 8);
    func_02048ad4(enabled);
    return 1;
}
