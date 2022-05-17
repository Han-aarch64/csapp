#include <stdio.h>
int main() {
        unsigned long x = 0x89ABCDEF;
        unsigned long y = 0x76543210;
        printf("size of x: %lu\n", sizeof(x));
        unsigned long word = (x << 56 >> 56) | (y >> 8 << 8);
        printf("word: %lX\n", word);
}