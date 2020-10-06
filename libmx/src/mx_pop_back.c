#include "libmx.h"

void mx_pop_back(t_list **list) {
    t_list *tmp = NULL;
    if (*list == NULL || list == NULL)
        return;
    if ((*list)->next == NULL) {
        free(*list);
        *list = NULL;
    }
    else {
        tmp = *list;
        while (tmp->next->next != NULL)
            tmp = tmp->next;
        free(tmp->next);
        tmp->next = NULL;
    }

}
