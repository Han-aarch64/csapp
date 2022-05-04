```c
int tadd_ok(int x, int y) {
        int sum = x + y;
        return (sum-x == y) && (sum-y == x);
}
```

This code is buggy because it will always return true. When there is an overflow in the addition, there will also be an overflow in the subtraction.