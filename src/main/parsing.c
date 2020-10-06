#include "pathfinder.h"

static void unique_islands_save(t_matrix *mx) {
    int i = 0;

    for ( ; mx->islands_save[i] != NULL; i++) {
        if (!mx_strcmp(mx->islands_save[i], mx->temp))
            return;
    }
    mx->islands_save[i] = mx_strdup(mx->temp);
}

void parsing(t_valid *s, t_matrix *mx, char **str_split) {
    char **tmp_bridge = NULL;
    char **tmp_islands = NULL;
    mx->islands_save = NULL;
    mx->islands_save = (char **)malloc(sizeof(char *) * s->h + 1);
    for (int i = 0; i <= s->h; i++)
        mx->islands_save[i] = NULL;

    for(int i = 1; str_split[i]; i++) {
        tmp_bridge = mx_strsplit(str_split[i], ',');
        tmp_islands = mx_strsplit(tmp_bridge[0], '-');
        mx->temp = mx_strdup(tmp_islands[0]);
        unique_islands_save(mx);
        free(mx->temp);
        mx->temp = mx_strdup(tmp_islands[1]);
        unique_islands_save(mx);
        free(mx->temp);
        mx_del_strarr(&tmp_bridge);
        mx_del_strarr(&tmp_islands);
    }
}
