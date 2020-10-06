#include "libmx.h"

char *mx_strnew(const int size) {
    char *A = NULL;

    if (size < 0) 
        return NULL;
    A = (char *)malloc(sizeof(char) * (size + 1));
    for (int i = 0; i <= size; i++)
        A[i] = '\0';
    return A;  
}
