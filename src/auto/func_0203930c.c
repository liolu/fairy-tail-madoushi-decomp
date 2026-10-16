/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */

typedef unsigned int u32;
typedef unsigned char u8;
typedef void (*UnkOverlayCtor)(void);
typedef struct UnkOverlayInfo {
    u32 id;
    u8 *addr;
    u32 ramSize;
    u32 bssSize;
    UnkOverlayCtor *ctorStart;
    UnkOverlayCtor *ctorEnd;
    u32 fileId;
    u32 compressedSize : 24;
    u32 flags : 8;
    u32 target;
    u32 filePos;
    u32 fileLen;
} UnkOverlayInfo;
typedef struct UnkDestructorChain {
    struct UnkDestructorChain *next;
    void (*dtor)(void *object);
    void *object;
} UnkDestructorChain;
extern UnkDestructorChain *data_0215d614;
extern u32 func_02048ac0(void);
extern u32 func_02048ad4(u32 irq);

/* func_020619d0 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/fs/overlay.c (license: none), reused by
 * tools/donor_match.py */
void func_0203930c(UnkOverlayInfo *info) {
    while (1) {
        UnkDestructorChain *head = 0;
        UnkDestructorChain *tail = 0;
        u32 start                = (u32) info->addr;
        u32 end                  = start + (info->ramSize + info->bssSize);
        u32 irq;
        UnkDestructorChain *prev;
        UnkDestructorChain *base;
        UnkDestructorChain *cur;

        irq  = func_02048ac0();
        prev = 0;
        base = data_0215d614;
        cur  = base;

        while (cur != 0) {
            UnkDestructorChain *next = cur->next;
            u32 dtor                 = (u32) cur->dtor;
            u32 object               = (u32) cur->object;

            if ((object == 0 && dtor >= start && dtor < end) || (object >= start && object < end)) {
                if (tail != 0) {
                    tail->next = cur;
                } else {
                    head = cur;
                }
                if (base == cur) {
                    base = data_0215d614 = next;
                }
                tail      = cur;
                cur->next = 0;
                if (prev != 0) {
                    prev->next = next;
                }
            } else {
                prev = cur;
            }
            cur = next;
        }

        func_02048ad4(irq);

        if (head == 0) {
            return;
        }

        do {
            UnkDestructorChain *next = head->next;
            if (head->dtor != 0) {
                head->dtor(head->object);
            }
            head = next;
        } while (head != 0);
    }
}
