// Suppose int is 32 bit.
int tmult_ok(int x, int y) {
        int64_t p = x * (int64_t)y;
        return !(p & 0xffff0000u);
}