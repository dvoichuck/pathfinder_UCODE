#pragma once

#include <malloc/malloc.h>
#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include <errno.h>
#include <stdio.h>

#define INT_MIN -2147483648
#define LONG_MAX 9223372036854775807
#define LONG_MIN -9223372036854775807

/*
 * Utils pack
 */
void mx_printchar(char c); // DONE+++
void mx_print_unicode(wchar_t c);
void mx_printstr(const char *s); //DONE+++
void mx_print_strarr(char **arr, const char *delim);
void mx_printint(int n); //DONE+++
double mx_pow(double n, unsigned int pow); //DONE+++
int mx_sqrt(int x); //DONE+++
char *mx_nbr_to_hex(unsigned long nbr); //DONE+++
unsigned long mx_hex_to_nbr(const char *hex); //DONE+++
char *mx_itoa(int number);
void mx_foreach(int *arr, int size, void (*f)(int)); //DONE+++
int mx_binary_search(char **arr, int size, const char *s, int *count); //DONE+++
int mx_bubble_sort(char **arr, int size); //DONE+++
int mx_quicksort(char **arr, int left, int right);

/*
 * String pack
 */
int mx_strlen(const char *s); //DONE+++
void mx_swap_char(char *s1, char *s2); //DONE+++
void mx_strdel(char **str); //DONE+++
void mx_str_reverse(char *s); // DONE+++
void mx_del_strarr(char ***arr);  //DONE+++
int mx_get_char_index(const char *str, char c); //DONE+++
char *mx_strdup(const char *s1); //DONE+++
char *mx_strndup(const char *s1, size_t n);
char *mx_strcpy(char *dst, const char *src); //DONE+++
char *mx_strncpy(char *dst, const char *src, int len); //DONE+++
int mx_strcmp(const char *s1, const char *s2); //DONE+++
char *mx_strcat(char *restrict s1, const char *restrict s2); //CHECK NAME     VARIABLES!!! //DONE+++
char *mx_strstr(const char *haystack, const char *needle); //CHECK NAME VARIABLES!!! //DONE+++
int mx_get_substr_index(const char *str, const char *sub);
int mx_count_substr(const char *str, const char *sub); // DONE +++
int mx_count_words(const char *str, char c); //CHECK NAME VARIABLES!!! DONE +++
char *mx_strnew(const int size); //DONE+++
char *mx_strtrim(const char *str); //DONE+++
char *mx_del_extra_spaces(const char *str); //Need to change (Oracle = 0 FAIL) //DONE+++
char **mx_strsplit(char const *s, char c); //DONE+++
char *mx_strjoin(char const *s1, char const *s2); //DONE+++
char *mx_file_to_str(const char *file); //DONE+++
// int mx_read_line(char **lineptr, size_t buf_size, char delim, const int fd);
char *mx_replace_substr(const char *str, const char *sub, const char *replace);

/*
 * Memory pack
 */

/*
 * 11 functions
 */

void *mx_memset(void *b, int c, size_t len);
void *mx_memcpy (void *restrict dst, const void *src, size_t n);
void *mx_memccpy(void *restrict dst, const void *restrict src, 
                int c, size_t n);
int mx_memcmp(const void *s1, const void *s2, size_t n);
void *mx_memchr(const void *s, int c, size_t n);
void *mx_memchr(const void *s, int c, size_t n);
void *mx_memrchr(const void *s, int c, size_t n);
void*mx_memmem(const void *big, size_t big_len, const void *little,
                size_t little_len);
void *mx_memmove(void *dst, const void *src, size_t len);
void *mx_realloc(void *ptr, size_t size);

/*
 * List pack
 */
typedef struct s_list {
    void *data;
    struct s_list *next;
} t_list;

t_list *mx_create_node(void *data); //DONE+++
t_list *mx_sort_list(t_list *list, bool (*cmp)(void *a, void *b));

int mx_list_size(t_list *list); //DONE+++
void mx_pop_front(t_list **list); //DONE+++
void mx_pop_back(t_list **list); //DONE+++
void mx_push_front(t_list **list, void *data); //DONE+++
void mx_push_back(t_list **list, void *data); //DONE+++



/*
 * Other functions pack
 */
int mx_nul_strlen(const char *s);
bool mx_isspace(char c);
int mx_strncmp(const char *s1, const char *s2, int n);
char *mx_strchr(const char *s, int c);
void mx_printerr(const char *s);
bool mx_isdigit(int c);
bool mx_isalpha(int c);
int mx_strncmp_delim(const char *s1, const char *s2, char delim);
int mx_atoi(const char *str);
long mx_atoi_long(const char *str);
