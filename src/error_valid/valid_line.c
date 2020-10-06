#include "pathfinder.h"

static void check(t_valid *s) {
    if (s->k != 3 && s->f != 3) {
        printvalid(s->i, 4, NULL, s);
    }
}
static void check1(char **str_split, t_valid *s) {
    for (;s->f == 0 && mx_isalpha(str_split[s->i][s->j]); s->j++)
            s->k = 1;
    if (str_split[s->i][s->j] == '-' && s->f == 0 && s->k == 1) {
            s->f = 1;
            s->j++;
    }
    if ((!mx_isalpha(str_split[s->i][s->j]) 
        && str_split[s->i][s->j] != '-' && s->f == 0) || s->k == 0) {
        printvalid(s->i, 4, NULL, s);
    }
}

static void check2(char **str_split, t_valid *s) {
    if (s->f == 1 && mx_isalpha(str_split[s->i][s->j])) 
        s->k = 2;
    if (str_split[s->i][s->j] == ',' && s->f == 1 && s->k == 2) {
        s->f = 2;
        s->j++;
    }
    if ((!mx_isalpha(str_split[s->i][s->j]) && str_split[s->i][s->j] != ',' 
        && s->f == 1 && s->k == 2)
        || s->k == 1)
        printvalid(s->i, 4, NULL, s);
    if (!mx_isdigit(str_split[s->i][s->j]) && str_split[s->i][s->j] != '\0' 
        && s->f == 2 
        && s->k == 2) {
        printvalid(s->i, 4, NULL, s);
    }
}
static void check3(char **str_split, t_valid *s) {
    if (!mx_isdigit(str_split[s->i][s->j]) && str_split[s->i][s->j] != '\0')
        printvalid(s->i, 4, NULL, s);
    s->k = 3;
    s->f = 3;
}
void valid_line(char **str_split, t_valid *s) {
    for(s->j = 0; str_split[s->i][s->j] != '\0'; s->j++) {
        check1(&(*str_split), s);
        check2(&(*str_split), s);
        if (mx_isdigit(str_split[s->i][s->j]) && s->f == 2 && s->k == 2) {
            while (mx_isdigit(str_split[s->i][s->j]) && s->f == 2 && s->k == 2) 
                s->j++;
            check3(&(*str_split), s);
        }
    }
    check(s);
}
