unsigned rotate_left(unsigned x, int n) {
    unsigned w = sizeof(x) << 3;
    return (x << n) | (x >> (w - n - 1) >> 1);
}