#include "libmx.h"

void *mx_memset(void *b, int c, size_t len) {
    unsigned char *tmp = (unsigned char*) b;

    if(b) 
        while(len--)
            *tmp++ = c;
    return b;
}
