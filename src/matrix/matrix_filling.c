#include "pathfinder.h"

static void get_island_index(t_matrix *mx, t_valid *s, char *tmp_island, int *index) {

    for (int i = 0 ; i < s->h; i++)
        if (!mx_strcmp(tmp_island, mx->islands_save[i])) {
            (*index) = i;
            return;
        }
}

void matrix_filling(t_matrix *mx, t_valid *s, char **str_split) {
    int col = 0;
    int row = 0;
    char **tmp_islands = NULL;
    char **tmp_bridges = NULL;


    for (int i = 0; i < mx->count_bridge; i++) {
        tmp_bridges = mx_strsplit(str_split[i + 1], ',');
        tmp_islands = mx_strsplit(tmp_bridges[0], '-');
        get_island_index(mx, s, tmp_islands[0], &col);
        get_island_index(mx, s, tmp_islands[1], &row);
        mx->matrix_first[col][row] = mx->value[i];
        mx->matrix_first[row][col] = mx->value[i];
        mx_del_strarr(&tmp_islands);
        mx_del_strarr(&tmp_bridges);
    }
}
