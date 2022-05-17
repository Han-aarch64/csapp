#include <stdio.h>

int int_shifts_are_arithmetic() {
    int x = -1;
    x >>= ((sizeof(x) << 3) - 1);
    return !(x + 1);
}

int main() {
    printf("This machine is using arithmetic shift for int? %d\n", int_shifts_are_arithmetic());
}