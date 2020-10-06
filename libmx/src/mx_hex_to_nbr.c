#include "libmx.h"

unsigned long mx_hex_to_nbr(const char *hex) {
    unsigned long num = 0;
    int n = 0;
    unsigned long j = 1;

    if (!hex)
        return 0;
    for (;hex[n + 1]; n++)
        j *= 16;
    for (int i = 0; hex[i]; i++) {
        if (hex[i] >= 48 && hex[i] <= 57)
            num += (hex[i] - 48) * j;
        if (hex[i] >= 65 && hex[i] <= 70)
            num += (hex[i] - 55) * j;
        if (hex[i] >= 97 && hex[i] <= 102)
            num += (hex[i] - 87) * j;
        j /= 16;
    }
    return num;

}
