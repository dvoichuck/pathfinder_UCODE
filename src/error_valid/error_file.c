#include "pathfinder.h"

void error_file(int argc, char **argv) {
    int file = open(argv[1], O_RDONLY);
    char *buf = NULL;
    int i = 0;

    read(file, &buf, 1);
    if (argc == 1 || argc > 2)
        error_print(i + 1, argv[0]);
    if (file <= 0)
        error_print(i + 2, argv[1]);
    if (!buf) 
        error_print(i + 3, argv[1]);
    close(file);
}
