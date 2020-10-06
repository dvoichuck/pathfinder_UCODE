#include "pathfinder.h"

void valid_first_line(char *str, t_valid *s) {
    int i = 0;

    s->l = 0;
    s->n = 0;
    if (str[i] == '\n') 
        valid_first_pirnt(6);
    for (i = 0; str[i] != '\n'; i++)  {
        if (!mx_isdigit(str[i]))
            valid_first_pirnt(6);
    }
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n')
            s->l++;
        if (str[i] == '\n' && str[i + 1] == '\n')  {
            s->n = s->l;
            break;
        }
    }
}
