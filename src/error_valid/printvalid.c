#include "pathfinder.h"

void printvalid(int line, int i, char *argv, t_valid *s) {
    char *line_c;

    if (s->n < line && s->n != 0)
        line = s->n;
    if (i == 4) {
        line_c = mx_itoa(line + 1);
        mx_printerr("error: line ");
        mx_printerr(line_c);
        mx_printerr(" is not valid\n");
        exit(1);
    }
    if (i == 5) {
        mx_printerr("error: duplicate bridges\n");
        exit(1);
    }
}
