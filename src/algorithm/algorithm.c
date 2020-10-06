#include "pathfinder.h"

void algorithm(t_valid *s, t_matrix *mx) {
    for (int k = 0; k < s->h; k++) {
        for (int i = 0; i < s->h; i++) {
            for (int j = i + 1; j < s->h; j++) {
                if (mx->matrix_adj[i][k] != INT_MAX
                    && mx->matrix_adj[k][j] != INT_MAX
                    && mx->matrix_adj[i][j] > mx->matrix_adj[i][k]
                                           + mx->matrix_adj[k][j]) {
                    mx->matrix_adj[i][j] = mx->matrix_adj[i][k]
                                        + mx->matrix_adj[k][j];
                    mx->matrix_adj[j][i] = mx->matrix_adj[i][j];
                }
            }
        }
    }
}
