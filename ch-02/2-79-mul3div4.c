int divide_power2(int x, int k) {
    int bias = (x >> ((sizeof(x) << 3) - 1) & ((1 << k) - 1));
    return (x + bias) >> k;
}

int mul3div4(x) {
    int mul3 = x << 1 + x;
    return divide_power2(mul3, 2);
}