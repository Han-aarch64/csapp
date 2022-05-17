#include <stdio.h>
unsigned replace_byte (unsigned x, int i, unsigned char b) {
        unsigned mask = ~(0xFF << (i * 8));
        x &= mask;
        x |= ((unsigned) b << (i * 8));
        return x;
}

int main() {
        unsigned x = 0x12345678;
        printf("x after replace byte 2: %X\n", replace_byte(x, 2, 0xAB));
}