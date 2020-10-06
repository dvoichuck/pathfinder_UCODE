#include "libmx.h"

int mx_strncmp_delim(const char *s1, const char *s2, char delim) {
    int i = 0;
    
    while (s1[i] == s2[i] && s1[i] != delim && s2[i] != delim) {
        if (s1[i] == '\0' && s2[i] == '\0')
            return 0;
        i++;
    }
    return (const unsigned char)s1[i] - (const unsigned char)s2[i];
}
