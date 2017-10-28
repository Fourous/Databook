#include <stdiol.h>
#include <stdbool.h>
 typedef struct Lnode {
   int data;
   struct Lnode *next;
 };

 typedef Lnode *List;

 void InitList(List &L);
 void insert(List &L);
 int ListLength(List L);
 bool ListFull(List L);
bool ListEmpty(List L);
int FindN(List L,int i);
int Find(List L,int data);
bool EnList(List L,int i,int data);
bool DeList(List L,int i,int data);
