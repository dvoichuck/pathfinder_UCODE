#include "pathfinder.h"

void valid_islands(char **str, t_valid *s) {
    int j = 0;
    int f = 0;
    
    while (str[s->i][j] != '-')
        j++;
    j++;
    for (f = 0; str[s->i][f] == str[s->i][j]; f++) {
        if (str[s->i][f + 1] == '-' && str[s->i][j + 1] == ',')
            printvalid(s->i, 4, NULL, s);
        j++;
    }
}
