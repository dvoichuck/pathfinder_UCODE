#include "pathfinder.h"

static void print_error_file(int i, char *argv) {
    if (i == 1) {
        mx_printerr("usage: ");
        mx_printerr(argv);
        mx_printerr(" [filename]\n");
        exit(1);
    }
    if (i == 2) {
        mx_printerr("error: file ");
        mx_printerr(argv);
        mx_printerr(" does not exist\n");
        exit(1);
    }
    if (i == 3) {
        mx_printerr("error: file ");
        mx_printerr(argv);
        mx_printerr(" is empty\n");
        exit(1);
    }
}

void error_print(int i, char *argv) {
    if (i >= 1 && i <= 3)
        print_error_file(i, argv);
}
