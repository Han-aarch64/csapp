int fits_bits(int x, int n) {
    unsigned w = sizeof(x) << 3;
    return x << (w - n) >> (w - n) == x;
}