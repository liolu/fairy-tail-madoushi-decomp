/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02041344 from projets/spider-man-web-of-shadows/src/donor/func_02041344.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef int s32;
typedef s32 BOOL;
extern void func_0204a6cc(void *bank, int index, void *waveArc);
typedef struct UnkSndWaveArc UnkSndWaveArc;
typedef struct UnkSndWaveArcLink {
    UnkSndWaveArc *waveArc;
    struct UnkSndWaveArcLink *next;
} UnkSndWaveArcLink;
struct UnkSndWaveArc {
    u8 unk_00[8];
    u32 fileSize;
    u8 unk_0c[4];
    u8 blockHeader[8];
    UnkSndWaveArcLink *topLink;
    u32 reserved[7];
    u32 waveCount;
    u32 waveOffset[0];
};
typedef struct UnkSndBankInfo {
    u32 fileId;
    u16 waveArcNo[4];
} UnkSndBankInfo;
typedef struct UnkSndWaveArcInfo {
    u32 fileId : 24;
    u32 flags : 8;
} UnkSndWaveArcInfo;
extern void *func_02033224(int index);
extern void *func_02033288(int index);
extern void *func_020335b4(u32 fileId);
extern int func_02033b50(int bankNo, u32 flags, void *heap, BOOL addToArc, void **pData);
extern int func_02033c90(int waveArcNo, u32 flags, void *heap, BOOL addToArc, void **pData);
extern void *func_02033e90(u32 fileId, void *heap, BOOL addToArc);
extern BOOL func_020342a0(UnkSndWaveArc *waveArc, void *bank, int index, u32 fileId, void *heap);
int func_02033b50(int bankNo, u32 flags, void *heap, BOOL addToArc, void **pData) {
    UnkSndBankInfo *info = func_02033224(bankNo);
    void *bank;
    int i;

    if (info == 0) {
        return 4;
    }

    if (flags & 2) {
        bank = func_02033e90(info->fileId, heap, addToArc);
        if (bank == 0) {
            return 8;
        }
    } else {
        bank = func_020335b4(info->fileId);
    }

    for (i = 0; i < 4; i++) {
        UnkSndWaveArcInfo *waveArcInfo;
        void *waveArc;
        int result;

        if (info->waveArcNo[i] == 0xFFFF) {
            continue;
        }

        waveArcInfo = func_02033288(info->waveArcNo[i]);
        if (waveArcInfo == 0) {
            return 5;
        }

        result = func_02033c90(info->waveArcNo[i], flags, heap, addToArc, &waveArc);
        if (result != 0) {
            return result;
        }

        if ((waveArcInfo->flags & 1) && (flags & 4)) {
            if (!func_020342a0(waveArc, bank, i, waveArcInfo->fileId, heap)) {
                return 9;
            }
        }

        if (bank != 0 && waveArc != 0) {
            func_0204a6cc(bank, i, waveArc);
        }
    }

    if (pData != 0) {
        *pData = bank;
    }
    return 0;
}
extern int func_02033c90(int waveArcNo, u32 flags, void *heap, BOOL addToArc, void **pData);
extern void *func_02033e90(u32 fileId, void *heap, BOOL addToArc);
extern BOOL func_020342a0(UnkSndWaveArc *waveArc, void *bank, int index, u32 fileId, void *heap);
