/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020755f8 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSystem/src/snd/snd_arcload.c (license: none),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned char u8;
typedef int s32;
typedef s32 BOOL;
extern void func_020475d8(void *ptr, u32 size);
extern u32 func_0204aa48(void *waveArc);
extern void *func_0204aa84(void *waveArc, u32 index);
extern void func_0204aa50(void *waveArc, u32 index, void *wave);
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
typedef void (*UnkSndHeapCallback)(void *mem, u32 size, void *data1, u32 data2);
extern s32 func_020334cc(u32 fileId, void *dst, u32 size, u32 offset);
extern void *func_020337a0(void *heap, u32 size, UnkSndHeapCallback callback, void *data1, u32 data2);
extern void func_02034190(void *mem, u32 size, void *data1, u32 data2);
extern BOOL func_020341d8(UnkSndWaveArc *waveArc, u32 index, u32 fileId, void *heap);
void func_02034190(void *mem, u32 size, void *data1, u32 data2);
BOOL func_020341d8(UnkSndWaveArc *waveArc, u32 index, u32 fileId, void *heap) {
    u32 size;
    u32 offset;
    u32 end;

    if (func_0204aa84(waveArc, index) != 0) {
        return 1;
    }

    {
        u32 count = func_0204aa48(waveArc);
        u32 i     = waveArc->waveCount + index;
        offset    = waveArc->waveOffset[i];
        end       = index < count - 1 ? *(waveArc->waveOffset + i + 1) : waveArc->fileSize;
    }
    size = end - offset;

    if (heap == 0) {
        return 0;
    }

    heap = func_020337a0(heap, size + 0x20, func_02034190, waveArc, index);
    if (heap == 0) {
        return 0;
    }

    if (size != func_020334cc(fileId, heap, size, offset)) {
        return 0;
    }

    func_020475d8(heap, size);
    func_0204aa50(waveArc, index, heap);
    return 1;
}
