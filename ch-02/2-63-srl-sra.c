#include <stdio.h>
#include <limits.h>

unsigned srl(unsigned x, int k) {
    unsigned xsra = (int) x >> k;
    if ((int) xsra >= 0) return xsra;
    unsigned mask = (1 << ((sizeof(x) << 3) - k)) - 1;
    return (xsra & mask);
}

int sra(int x, int k) {
    int xsrl = (unsigned) x >> k;
    if (x >= 0) return xsrl;
    int mask = ~0 << ((sizeof(x) << 3) - k);
    return (xsrl | mask);
}

int main() {
    unsigned ux = 0xFFFFFFFF;
    printf("Logical shift by Arithmetic shift for %08X and %d bits -> %08X\n", ux, 7, srl(ux, 7));
    int x = INT_MIN;
    printf("Logical shift by Arithmetic shift for %08X and %d bits -> %08X\n", x, 8, sra(x, 8));
}