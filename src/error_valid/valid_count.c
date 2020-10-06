#include "pathfinder.h"

void valid_count(t_valid *s, t_matrix *mx, char *str) {
    long int d = 0;
    int f = 0;
    int j = 0;

    mx->value = (int *)malloc(sizeof(int) * mx->count_bridge);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ',' || str[i] == '\n')
            str[i] = '-';
    }
    mx->bridge = mx_strsplit(str, '-');
    for (int i = 0; mx->bridge[i]; i++)
        f++;
    for (int i = 3; i < f; i += 3) { 
        d += mx_atoi_long(mx->bridge[i]);
        if (d > INT_MAX) {
            mx_printerr("error: sum of bridges lengths is too big\n");
            exit(1);
        }
        mx->value[j] = mx_atoi_long(mx->bridge[i]);
        j++;
    }
}
