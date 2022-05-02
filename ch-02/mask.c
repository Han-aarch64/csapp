#include <stdio.h>


int main() {
        int32_t x = 0x87654321;
        size_t w = 32;
        int32_t mask_a = 0xFF;
        int32_t mask_b = ~0xFF;
        int32_t mask_c = 0xFF;

        printf("A: %08x\n", x & mask_a);
        printf("B: %08x\n", x ^ mask_b);
        printf("C: %08x\n", x | mask_c);
}


