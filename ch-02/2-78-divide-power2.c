int divide_power2(int x, int k) {
    int bias = (x >> ((sizeof(x) << 3) - 1) & ((1 << k) - 1));
    return (x + bias) >> k;
}