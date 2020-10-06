#include "libmx.h"

void mx_str_reverse(char *s) {
    int length = mx_strlen(s) - 1;
    int i = 0;
    
    if(s == 0)
        return;
    while(length > i) {
        mx_swap_char(&s[i], &s[length]);
        i++;
        length--;
    }
}
