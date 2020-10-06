#include "pathfinder.h"

static void free_mass(char **tmp_bridge, char **tmp_islands) {
    for (int i = 0; tmp_bridge[i]; i++)
        free(tmp_bridge[i]);
    for (int i = 0; tmp_islands[i]; i++)
        free(tmp_islands[i]);
    free(tmp_bridge);
    free(tmp_islands);
}

void valid_bridge(char **str, t_valid *s) {
    s->u = s->i;
    s->z = s->i - 1;
    char **tmp_bridge_1;
    char **tmp_bridge_2;
    char **tmp_islands_1;
    char **tmp_islands_2;

    for (; str[s->u]; s->u++) {
        tmp_bridge_1 = mx_strsplit(str[s->u], ',');
        tmp_islands_1 = mx_strsplit(tmp_bridge_1[0], '-');
        tmp_bridge_2 = mx_strsplit(str[s->z], ',');
        tmp_islands_2 = mx_strsplit(tmp_bridge_2[0], '-');
        if ((mx_strcmp(tmp_islands_1[0], tmp_islands_2[0]) == 0 
            && mx_strcmp(tmp_islands_1[1], tmp_islands_2[1]) == 0) 
            || (mx_strcmp(tmp_islands_1[0], tmp_islands_2[1]) == 0 
            && mx_strcmp(tmp_islands_1[1], tmp_islands_2[0]) == 0)) {
            free_mass(tmp_bridge_1, tmp_islands_1);
            free_mass(tmp_bridge_2, tmp_islands_2);
            printvalid(s->i, 5, NULL, s);
        }
        free_mass(tmp_bridge_1, tmp_islands_1);
        free_mass(tmp_bridge_2, tmp_islands_2);
    }
}
