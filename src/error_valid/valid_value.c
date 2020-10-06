#include "pathfinder.h"

void valid_value(t_valid *s) {
    if (s->h != s->d) {
        mx_printerr("error: invalid number of islands\n");
        exit(1);
    }
}
