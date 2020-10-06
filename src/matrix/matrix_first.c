#include "pathfinder.h"

void matrix_first(t_valid *s, t_matrix *mx) {
    int col = 0;
    int row = 0;

    mx->matrix_first = (long int **)malloc(sizeof(long int *) * s->h);
    for(int i = 0; i < s->h; i++) {
        mx->matrix_first[i] = (long int *)malloc(sizeof(long int) * s->h);
    }
    for (col = 0; col < s->h; col++ && row++) {
        for (row = 0; row < s->h; row++) {
            mx->matrix_first[col][row] = INT_MAX;
            if (col == row)
                mx->matrix_first[col][row] = 0;
        }
    }
}
