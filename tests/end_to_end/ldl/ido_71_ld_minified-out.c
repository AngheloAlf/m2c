extern ? B_100A695C;
extern s32 addend..PHF;

void whatever(void) {
    addend..PHF += (u64) (unaligned s64) B_100A695C >> 0x30;
}
