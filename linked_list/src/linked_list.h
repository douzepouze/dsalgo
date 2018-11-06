#pragma once

typedef struct {
    void* data;
    ListElmnt* next;
} ListElmnt;

typedef struct {
    int size;
    ListElmnt *head;
    ListElmnt *tail;
} List;
