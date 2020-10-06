#include "libmx.h"

void *mx_memrchr(const void *s, int c, size_t n) {
    unsigned char *tmp = (unsigned char *)s;

    while (n > 0) {
        n--;
        tmp++;
        if (*tmp == c)
            return tmp;
    }
    return NULL;
}
