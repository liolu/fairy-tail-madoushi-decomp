/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02041260 from projets/spider-man-web-of-shadows/src/donor/func_02041260.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef int s32;
typedef s32 BOOL;
typedef struct UnkSndSeqInfo {
    u32 fileId;
    u16 bankNo;
} UnkSndSeqInfo;
extern void *func_0203315c(int index);
extern void *func_020335b4(u32 fileId);
extern int func_02033a6c(int seqNo, u32 flags, void *heap, BOOL addToArc, void **pData);
extern int func_02033b50(int bankNo, u32 flags, void *heap, BOOL addToArc, void **pData);
extern void *func_02033db8(u32 fileId, void *heap, BOOL addToArc);
int func_02033a6c(int seqNo, u32 flags, void *heap, BOOL addToArc, void **pData) {
    UnkSndSeqInfo *info = func_0203315c(seqNo);
    void *data;
    int result;

    if (info == 0) {
        return 2;
    }

    result = func_02033b50(info->bankNo, flags, heap, addToArc, 0);
    if (result != 0) {
        return result;
    }

    if (flags & 1) {
        data = func_02033db8(info->fileId, heap, addToArc);
        if (data == 0) {
            return 6;
        }
    } else {
        data = func_020335b4(info->fileId);
    }

    if (pData != 0) {
        *pData = data;
    }
    return 0;
}
extern int func_02033b50(int bankNo, u32 flags, void *heap, BOOL addToArc, void **pData);
extern void *func_02033db8(u32 fileId, void *heap, BOOL addToArc);
