#include "libmx.h"

char *mx_replace_substr(const char *str, const char *sub, const char *replace) {
    char *dst = NULL;

    if (str && sub && replace) {
        dst = mx_strnew(mx_strlen(str) + (mx_strlen(replace) - mx_strlen(sub)) 
                        * mx_count_substr(str, sub));
        for (int i = 0; *str != '\0'; ) {
            if (mx_strncmp(str, sub, mx_strlen(sub)) == 0) {
                mx_strcat(dst, replace);
                i += mx_strlen(replace);
                str += mx_strlen(sub);
            }
            else
                dst[i++] = *str++;
        }
    }
    return dst;
}
