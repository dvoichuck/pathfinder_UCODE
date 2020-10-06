#include "libmx.h"

void *mx_memccpy(void *restrict dst, const void *restrict src, 
                int c, size_t n) {
    unsigned char *tmp = (unsigned char *)dst;
    size_t i;
    
    for (i = 0; i <= n; i++) {
        tmp[i] = ((const unsigned char *)src)[i];
        if (((const unsigned char *)src)[i++] == (unsigned char) c)
           return &(((unsigned char *)dst)[i]);
    }
    return NULL;
}
