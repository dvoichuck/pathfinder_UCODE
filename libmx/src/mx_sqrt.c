#include "libmx.h"

int mx_sqrt(int x) {
    int i = 0;
    int sqrt = 0;

    for (i = 0; i <= 46340; i++) {
        if (sqrt > x)
            return 0;
        sqrt = i;
        sqrt *= sqrt;
        if (sqrt == x)
            return i;
    }
    return 0;
}
