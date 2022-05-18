/* Return 1 when x contains an odd number of 1s; 0 otherwise. Assume w=32 */
#include <stdio.h>

int odd_ones(unsigned x) {
    x ^= x >> 16;
    x ^= x >> 8;
    x ^= x >> 4;
    x ^= x >> 2;
    x ^= x >> 1;
    return x & 1;
}


int main() {
    unsigned x1 = 0xF;
    unsigned x2 = 0x8FF;
    printf("The unsigned number %08X has odd one bits? %d\n", x1, odd_ones(x1));
    printf("The unsigned number %08X has odd one bits? %d\n", x2, odd_ones(x2));
}