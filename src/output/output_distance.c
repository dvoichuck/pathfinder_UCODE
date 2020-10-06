#include "pathfinder.h"

void output_distance(t_matrix *mx, t_valid *s) {
    int distance = 0;
    
    mx_printstr("Distance: ");
    for (int i = 1; i < mx->waypoints; i++) {
        mx_printint((int) mx->matrix_first[mx->way[i]][mx->way[i + 1]]);
        distance += (int) mx->matrix_first[mx->way[i]][mx->way[i + 1]];
        if (i < mx->waypoints - 1)
            mx_printstr(" + ");
        else if (i != 1) {
            mx_printstr(" = ");
            mx_printint(distance);
        }
    }
    mx_printstr("\n");
}
