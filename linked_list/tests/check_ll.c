#include <check.h>
#include "../src/linked_list.h"

void destory_list(void *data) {
    
}

START_TEST(test_linked_init) 
{
    List *list;

    list_init(list, destory_list);
    ck_assert_int_eq(list_size(list), 0);
    ck_assert(list->head == NULL);
    ck_assert(list->tail == NULL);
    ck_assert(list->destory == destory_list);
}

int main(void) {
    return 0;
}
