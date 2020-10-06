#include "libmx.h"

void *mx_memchr(const void *s, int c, size_t n) {
    unsigned char *tmp = (unsigned char *)s;

    for (size_t i = 0; i < n; i++) {
        tmp++;
        if (*tmp == c)
            return tmp;
    }
    return NULL;
}
