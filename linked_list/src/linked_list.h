#pragma once

typedef struct ListElemnt_ {
    void* data;
    struct ListElmnt_* next;
} ListElmnt;

typedef struct {
    int size;
    void (*destroy)(void* data);
    ListElmnt *head;
    ListElmnt *tail;
} List;

extern void list_init(List *list, void (*destroy)(void *data));

