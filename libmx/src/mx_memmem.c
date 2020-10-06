#include "libmx.h"

void *mx_memmem(const void *big, size_t big_len, const void *little,
                size_t little_len) {
    unsigned char *tmp_l = (unsigned char *)little;
    unsigned char *tmp_b = (unsigned char *)big;
    size_t i;

    if (big_len > little_len && (big_len && little_len) > 0)
        for (i = 0; i < big_len; i++) {
            tmp_b++;
            if (!mx_memcmp(tmp_b, tmp_l, little_len - 1))
                return tmp_b;
        }
    return NULL;
}
