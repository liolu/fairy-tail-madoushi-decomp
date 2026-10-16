/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02049f94 from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/snd/calls/func_02049f94.c (license: CC0-1.0),
 * reused by tools/donor_match.py */
extern int func_02048ac0(void);
extern void func_02048ad4(int state);
typedef struct SNDCommand {
    struct SNDCommand *next;
    unsigned int id;
    unsigned int arg[4];
} SNDCommand;
typedef struct SNDCommandMgr {
    SNDCommand *freeHead;
    unsigned int processedTag;
    SNDCommand *reservedHead;
    SNDCommand *reservedTail;
    SNDCommand *freeTail;
    unsigned int unk14;
    int sentRingIndex;
    int sentBlockCount;
    unsigned int nextTag;
} SNDCommandMgr;
extern SNDCommandMgr data_0215a608;
void func_02049f94(SNDCommand *command) {
    SNDCommand *tail;
    int state;

    state = func_02048ac0();
    tail  = data_0215a608.reservedTail;

    if (tail == 0) {
        data_0215a608.reservedHead = command;
        data_0215a608.reservedTail = command;
    } else {
        tail->next                 = command;
        data_0215a608.reservedTail = command;
    }
    command->next = 0;
    func_02048ad4(state);
}
