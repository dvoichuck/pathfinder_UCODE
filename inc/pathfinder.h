#pragma once

#include "libmx.h"

#define INT_MAX 2147483647

typedef struct s_valid
{
    char **islands;
    char *value;
    int k, f;
    int g;
    int l;
    int i, j;
    int d, h;
    int n;
    int c;
    int v;
    int b;
    int u, z;
} t_valid;

typedef struct s_matrix
{
    char **islands_save;
    int count_bridge;
    char **bridge;
    char *count;
    int *value;
    long int **adj_matrix;
    long int **matrix_first;
    char **bridge_save;
    char *temp;
    long int **matrix_adj;
    int *way;
    int waypoints;

} t_matrix;

void output_way(t_matrix *mx, t_valid *s);
void output_generating(t_matrix *mx, t_valid *s, int i, int j);
void output_distance(t_matrix *mx, t_valid *s);
void output_path(t_matrix *mx, t_valid *s);
void output(t_matrix *mx, t_valid *s);
void mx_output_boundary(void);
void algorithm(t_valid *s, t_matrix *mx);
void matrix_adj(t_valid *s, t_matrix *mx);
void parsing(t_valid *s, t_matrix *mx, char **str_split);
void matrix_filling(t_matrix *mx, t_valid *s, char **str_split);
void matrix_first(t_valid *s, t_matrix *mx);
void no_line(t_valid *s);
void valid_count(t_valid *s, t_matrix *arr, char *str);
void valid_value(t_valid *s);
void islands(char **str_split, t_valid *s);
void islands_value(t_valid *s, char *str);
void valid_first_pirnt(int i);
void valid_bridge(char **str, t_valid *s);
void error_file(int argc, char **argv);
void valid_line(char **str_split, t_valid *s);
void printvalid(int line, int i, char *argv, t_valid *s);
void valid_first_line(char *str, t_valid *s);
void valid_islands(char **str, t_valid *s);
void error_print(int i, char *argv);
void all_error(char **str_split, char *str, t_valid *s, t_matrix *arr);
