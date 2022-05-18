/* Return 1 when any odd bit of x equals 1; 0 otherwise. Assume w=32 */
#include <stdio.h>

int any_odd_one(unsigned x) {
    unsigned mask = 0xAAAAAAAA;
    return (x & mask) & 1;
}


int main() {
    unsigned x1 = 0x1;
    unsigned x2 = 0x2;
    printf("The unsigned number %08X has odd one bits? %d\n", x1, any_odd_one(x1));
    printf("The unsigned number %08X has odd one bits? %d\n", x2, any_odd_one(x2));
}