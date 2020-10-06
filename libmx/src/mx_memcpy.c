#include "libmx.h"

void *mx_memcpy (void *restrict dst, const void *src, size_t n) {
    unsigned char *tmp = (unsigned char*) dst;

    for (size_t i = 0; i < n; i++)
        ((unsigned char *)tmp)[i] = ((unsigned char *)src)[i];
    return dst;
}
