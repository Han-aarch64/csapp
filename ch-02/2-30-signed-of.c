#include <stdio.h>
#define UINT_MAX ~(unsigned)0
int tadd_ok(int x, int y) {
        if (x > 0 && y > 0) return (x + y) > 0;
        if (x < 0 && y < 0) return (x + y) < 0;
        return 1;
}

int main() {
        unsigned a = (int) (UINT_MAX >> 1);
        unsigned b = 1;
        printf("%x add %x ", a, b);
        tadd_ok(a, b) ?  printf("will not cause overflow") : printf("will cause overflow");
        printf("\n");
}
