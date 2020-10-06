#include "pathfinder.h"

void all_error(char **str_split, char *str, t_valid *s, t_matrix *mx) {
    valid_first_line(str, s);
    no_line(s);
    for (s->i = 1; str_split[s->i]; s->i++) {
        s->f = 0;
        s->k = 0;
        valid_line(&(*str_split), s);
        valid_islands(&(*str_split), s);
    }
    mx->count_bridge = s->i - 1;
    if (s->n > 0) {
        for (int g = 0; str_split[g]; g++)
            free(str_split[g]);
        free(str_split);
        free(str);
        printvalid(s->n + 1, 4, NULL, s);
    }
    islands(&(*str_split), s);
    islands_value(s, str);
    valid_value(s);
    for (s->i = 1; str_split[s->i]; s->i++)
        if (s->i > 1)
            valid_bridge(&(*str_split), s);
    valid_count(s, mx, str);
}
