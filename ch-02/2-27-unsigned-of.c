#include <stdio.h>
#define UINT_MAX ~(unsigned)0
int uadd_ok(unsigned x, unsigned y) {
        return UINT_MAX - x >= y;
}

int main() {
        unsigned a = UINT_MAX;
        unsigned b = 1;
        printf("%x add %x ", a, b);
        uadd_ok(a, b) ?  printf("will not cause overflow") : printf("will cause overflow");
        printf("\n");
}
