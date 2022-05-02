```c
float sum_elements(float a[], unsigned length) {
        int i;
        float result = 0;
        for (i = 0; i <= length-1; i++)
                result += a[i]
        return result
}
```

This code is buggy because unsigned `length - 1` results in `UINT_MAX`.