#include "pathfinder.h"

void matrix_adj(t_valid *s, t_matrix *mx) {
    int col = 0;
    int row = 0;

    mx->matrix_adj = (long int **)malloc(sizeof(long int *) * s->h);
    for(int i = 0; i < s->h; i++) {
        mx->matrix_adj[i] = (long int *)malloc(sizeof(long int) * s->h);
    }
    for (col = 0; col < s->h; col++ && row++) {
        for (row = 0; row < s->h; row++) {
            mx->matrix_adj[col][row] = mx->matrix_first[col][row];
        }
    }
}
