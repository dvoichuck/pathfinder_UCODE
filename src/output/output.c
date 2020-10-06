#include "pathfinder.h"

static bool shortest_path_check(t_matrix *mx, int k) {
    int i = mx->way[mx->waypoints];
    int j = mx->way[0];

    if (i != k) {
        if (mx->matrix_first[i][k] ==
         mx->matrix_adj[j][i] - mx->matrix_adj[j][k])
        return 1;
    }
    return 0;
}

void output(t_matrix *mx, t_valid *s) {
    if (mx->way[mx->waypoints] == mx->way[0]) {
        mx_output_boundary();
        output_path(mx, s);
        output_way(mx, s);
        output_distance(mx, s);
        mx_output_boundary();
    }
    else {
        for (int k = 0; k < s->h; k++)
            if(shortest_path_check(mx, k)) {
                if (mx->waypoints < s->h) {
                    mx->waypoints++;
                    mx->way[mx->waypoints] = k;
                }
                output(mx, s);
                if (mx->waypoints > 1)
                    mx->waypoints--;
            }
    }
}
