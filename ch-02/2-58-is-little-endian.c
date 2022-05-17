/*Return 1 if runs on a little endian machine, 0 if on big endian machine*/
#include <stdio.h>

int is_little_endian() {
        unsigned x = ~0;
        x <<= 8;
        char * p = &x;
        return !*p;
}

int main() {
        if (is_little_endian()) printf("This machine is litte endian");
        else printf("This machine is big endian");
}