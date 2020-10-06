#include "pathfinder.h"

static void free_str(t_valid *s) {
    for (int i = 0; s->islands[i]; i++) {
        if (mx_strcmp(s->islands[i], "1") != 0)
            free(s->islands[i]);
    }
    free(s->islands);
}

static void valid(t_valid *s) {
    int d = (s->i - 1) * 2;
    int j = 0;
    char *str = "1";

    s->c = 0;
    for (int i = 0; i < d; i++)
        for (s->c = i + 1; s->c < d; s->c++) {
            if (mx_strcmp(s->islands[i], s->islands[s->c]) == 0 
                && mx_strcmp(s->islands[i], "1") != 0) {
                free(s->islands[s->c]);
                s->islands[s->c] = str;
            }
    }
    s->d = 0;
    for(int i = 0; s->islands[i]; i++) {
        if (s->islands[i] != str) {
            s->d++;
        }
    }
}

void islands(char **str_split, t_valid *s) {
    s->k = 0;
    s->islands = (char **)malloc(sizeof(char *) * ((s->i - 1) * 2 + 1));
    s->islands[(s->i - 1) * 2] = NULL;
    for (int i = 1; str_split[i]; i++) {
        for (s->b = 0; str_split[i][s->b] != '-';)
            s->b++;
        s->islands[s->k] = mx_strnew(s->b);
        for (s->b = 0; str_split[i][s->b] != '-'; s->b++)
            s->islands[s->k][s->b] = str_split[i][s->b];
        s->b++;
        s->c = s->b;
        for (s->v = 0; str_split[i][s->b] != ','; s->b++)
            s->v++;
        s->k++;
        s->islands[s->k] = mx_strnew(s->v);
        for (s->v = 0; str_split[i][s->c] != ','; s->c++) {
            s->islands[s->k][s->v] = str_split[i][s->c];
            s->v++;
        }
        s->k++;
    }
    valid(s);
    free_str(s);
}
