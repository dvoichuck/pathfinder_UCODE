#include "pathfinder.h"
    
int main(int argc, char *argv[]) {
    char *str = mx_file_to_str(argv[1]);
    char **str_split = mx_strsplit(str, '\n');
    t_valid s;
    t_matrix mx;
    error_file(argc, &(*argv));
    all_error(&(*str_split), str, &s, &mx);
    parsing(&s, &mx, str_split);
    matrix_first(&s, &mx);
    matrix_filling(&mx, &s, str_split);
    matrix_adj(&s, &mx);
    algorithm(&s, &mx);
    mx.way = (int *)malloc(sizeof(int) * s.h);
    for (int i = 0; i < s.h; i++)
        for (int j = i + 1; j < s.h; j++)
                output_generating(&mx, &s, i, j);
    for (int g = 0; str_split[g]; g++)
        free(str_split[g]);
    free(str_split);
    free(str);
    return 0;
}
