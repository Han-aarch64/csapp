#include <stdio.h>

#define exp_A(x) !(x + 1)
#define exp_B(x) !x
#define exp_C(x) !((x & 0xFF) ^ 0xFF)
#define exp_D(x) !((x & 0xFF000000) | 0)

int main() {
    int nums[4] = {0xFFFFFFFF, 0, 0x000000FF, 0x00FFFFFF};
    for (int i=0; i<sizeof(nums)/sizeof(nums[0]); i++ ) {

        printf("Expression A for %08X: %d\t", nums[i], exp_A(nums[i]));
        printf("Expression B for %08X: %d\t", nums[i], exp_B(nums[i]));
        printf("Expression C for %08X: %d\t", nums[i], exp_C(nums[i]));
        printf("Expression D for %08X: %d\n", nums[i], exp_D(nums[i]));
    }
    
}