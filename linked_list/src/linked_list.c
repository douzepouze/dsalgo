#include <stdlib.h>

#include "linked_list.h"

void list_init(List* list, void (*destroy)(void* data)) {
    list->destroy = destroy;
    list->size = 0;
    list->head = NULL;
    list->tail = NULL;
}
