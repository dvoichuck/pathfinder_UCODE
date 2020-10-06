#include "pathfinder.h"

void output_way(t_matrix *mx, t_valid *s) {
    mx_printstr("Route: ");
    for (int i = 1; i <= mx->waypoints; i++) {
        mx_printstr(mx->islands_save[mx->way[i]]);
        if (i < mx->waypoints)
            mx_printstr(" -> ");
        else
            mx_printstr("\n");
    }
}
