#include <stddef.h>

void *calloc(size_t nmemb, size_t size) {
    if (nmemb == 0 || size == 0) return NULL;
    size_t buf_size = nmemb * size;
    if (nmemb == buf_size / size) {
        // No overflow
        void *p = malloc(buf_size);
        if (p != NULL) {
            memset(p, 0, buf_size);
        }
        return p;
    } else {
        // multiplication overflow
        return NULL;
    }
}