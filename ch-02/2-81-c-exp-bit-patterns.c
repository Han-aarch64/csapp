#include <stdio.h>
#define exp_A(k) ~((0x1u << k) - 1)
#define exp_B(j, k) ((0x1u << k) - 1) << j

int main() {
    printf("exp A with k = 4: %08X\n", exp_A(4));
    printf("exp B with j = 3, k = 4: %08X\n", exp_B(3, 4));  
}