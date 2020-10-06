#include "libmx.h"

int mx_get_substr_index (const char *str, const char *sub) {
    int j = 0;
    int index = 0;
    
    if (str == NULL || sub == NULL)
        return -2;
    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] == sub[j]) {
            index = i;
            while (str[i] == sub[j]) {
                i++;
                j++;
                if(sub[j] == '\0')
                    return index;
            }
        }
        else
            j = 0;
    }
    return -1;
}
