```c
int tsub_ok(int x, int y) {
        return tadd_ok(x, -y);
}
```

This function will give incorrect results when y = INT_MIN. Because INT_MIN == -INT_MIN