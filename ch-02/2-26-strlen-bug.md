```c
size_t strlen(const char *s);

int strlonger(char *s, char *t) {
        return strlen(s) - strlen(t) > 0;
}
```

### A. For what cases will this function produce an incorrect result?
When `size_t` is defined as `unsinged` and the actual length of string s is less than the length of string t.
### B. Explain how this incorrect result comes about.
The substraction of unsigned integer follows modular arithmetic so it always output a non-negative value.
### C. Show how to fix the code so that it will work reliably.
```c
int strlonger(char *s, char *t) {
        return strlen(s) > strlen(t);
}
```