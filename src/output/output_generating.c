#include "pathfinder.h"

void output_generating(t_matrix *mx, t_valid *s, int i, int j) {
    int way_b = i;
    int way_e = j;

    for (int k = 0; k < s->h; k++)
        mx->way[k] = 0;
    mx->waypoints = 1;
    mx->way[0] = way_e;
    mx->way[1] = way_b;

    output(mx, s);
}
