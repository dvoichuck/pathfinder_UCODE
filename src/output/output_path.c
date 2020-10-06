#include "pathfinder.h"

void output_path(t_matrix *mx, t_valid *s) {
    mx_printstr("Path: ");
    mx_printstr(mx->islands_save[mx->way[1]]);
    mx_printstr(" -> ");
    mx_printstr(mx->islands_save[mx->way[mx->waypoints]]);
    mx_printstr("\n");
}
