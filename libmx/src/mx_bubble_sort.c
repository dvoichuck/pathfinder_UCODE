#include "libmx.h"

int mx_bubble_sort(char **arr, int size) {
    char *bubble;
    int counter = 0;
    
    for (int i = 0; i < size - 1; i++) {
        for (int j = size - 1; j > 0; j--) {
            if (mx_strcmp(arr[j], arr[j - 1]) < 0) {
                bubble = arr[j - 1];
                arr[j - 1] = arr[j];
                arr[j] = bubble;
                counter++;
            }
        }
    }
    return counter;
}
