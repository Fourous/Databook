#pragma once;
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define Max 100
#define Add 10
typedef struct {
      Element *elem;
      int length;
      int listsize;
}List;

bool InitList(List &L);
bool Destroy(List &L);
bool ClearList(List &L);
bool ListEmpty(List L);
bool ListFull(List L);
unsigned int ListLength(List L);
