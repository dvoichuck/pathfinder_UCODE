#include "libmx.h"

double mx_pow(double n, unsigned int pow) {
    unsigned int i = 0;
    double m = 1;
    if (pow == 0)
        return 1;
    while (i < pow) {
        m *= n;
        i++;
    }
    return m;
}
