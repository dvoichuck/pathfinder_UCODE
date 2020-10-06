#include "libmx.h"

char *mx_itoa(int number) {
    long int num = number;
    int i = 1;
    int j = 0;
    char *str = NULL;

    for ( ; number / 10; i++)
        number /= 10;
    num > 0 ? (str = mx_strnew(i)) : (str = mx_strnew(i + 1));
    num < 0 ? (j = 1, str[0] = '-', num *= -1) : i--;
    for ( ; i >= 0 + j; num /= 10)
        str[i--] = num % 10 + 48;
    return str;
}

