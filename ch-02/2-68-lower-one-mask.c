int lower_one_mask(int n) {
    unsigned w = sizeof(n) << 3;
    return ~0 >> (w - n);
}