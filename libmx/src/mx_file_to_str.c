#include "libmx.h"

char *mx_file_to_str(const char *filename) {
    int rd;
    char ch;
    int count = 0;
    char *str = NULL;

    rd = open(filename, O_RDONLY);
    if(rd > 0) {
        while(read(rd, &ch, 1))
            count++;
        close(rd);
        str = mx_strnew(count);
        rd = open(filename, O_RDONLY);
        for (int i = 0; read(rd, &ch, 1); i++) {
            str[i] = ch;
        }
        if (str == NULL)
            free(str);
        close(rd);
        return str;
    }
    return NULL;
}
