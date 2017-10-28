#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "List.h"
#define MAX 10

typedef struct Lnode{
  int data[MAX];
  int last;//末尾的下标值
}
typedef Lnode *List;

void InitList(List &L);
bool Destroy(List &L);
bool ClearList(List &L);
bool ListEmpty(List L);
bool ListFull(List L);
unsigned int ListLength(List L);
