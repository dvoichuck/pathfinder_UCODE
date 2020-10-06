#include "pathfinder.h"

void islands_value(t_valid *s, char *str) {
    int i = 0;
    
    while (str[i] != '\n')
        i++;
    s->value = mx_strnew(i - 1);
    for (i = 0; str[i] != '\n'; i++) {
        s->value[i] = str[i];
    }
    s->h = mx_atoi(s->value);
}
