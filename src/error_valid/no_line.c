#include "pathfinder.h"

void no_line(t_valid *s) {
    if (s->l == 1) {
        mx_printerr("error: line 2 is not valid\n");
        exit(1);
    }
}
