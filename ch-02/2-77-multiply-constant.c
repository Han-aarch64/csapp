#include <stdio.h>

int main() {
    int x = 20;

    // K = 17
    printf("%d * 17 = %d\n", x, (x + (x << 4))); 
    // K = -7
    printf("%d * -7 = %d\n", x, (x - (x << 3))); 
    // K = 60
    printf("%d * 60 = %d\n", x, ((x << 6) - (x << 2))); 
    // K = -112
    printf("%d * -112 = %d\n", x, ((x << 4) - (x << 7))); 
}