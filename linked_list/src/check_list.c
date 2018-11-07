#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

#include "linked_list.h"

#define EXPECT_EQUAL(test, expect) (test == expect) ? 0 : 1;

/**
 * Free ListElmnt
 */
void destroy_list(void *data) {
    /* TODO Implement */
}

int main(void) {
    List l;
    list_init(&l, destroy_list);
    
    int result = 0;
    result |= EXPECT_EQUAL(l.size, 0);
    result |= EXPECT_EQUAL(l.destroy, destroy_list);
    result |= EXPECT_EQUAL(l.head,  NULL);
    result |= EXPECT_EQUAL(l.tail, NULL);

    if (result) {
        printf("Test successful\n");
    } else {
        printf("Test failed\n");
    }
    return result;
}
