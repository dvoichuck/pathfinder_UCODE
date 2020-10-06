#include "libmx.h"

int mx_get_char_index(const char *str, char c) {
    int len = mx_nul_strlen(str) - 1;

    if(str) {
        for(int i = 0; i < len; i++)
            if(str[i] == c)
                return i;
        return -1;
    }
    else
        return -2;
}
