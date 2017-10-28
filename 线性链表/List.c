#include <stdio.h>
#include <stdbool.h>
#include "List.h"
#define OVERFLOW 1
void InitList(List &L){
  L=(List)malloc(sizeof(Lnode));
  L->next=NULL;
  if(!L)      exit (OVERFLOW);
}
void insert(List &L);
int ListLength(List L);
bool ListFull(List L);
bool ListEmpty(List L);
int FindN(List L,int K){
  int i=0;
  if(K<0)   return ERROR；
  List p=L;
  while (p==NULL&&i<K) {
    i++;
    p=p->next;
  }
  if(i==K)    return i;
  else return NULL;
}
int Find(List L,int data){
  List p=L;
  while (p==NULL&&p->data!=data) {
    p=p->next;
  }
}
bool EnList(List L,int i,int data){
  List p,s;
  if(i<0)   return ERROR;
  if(i==1)
  s=(List)malloc(sizeof(Lnode));
  s->data=data;
  s->next=L;

else
 s=(List)malloc(sizeof(Lnode));
 s->data=data;
 p=FindN(L,i-1);//注意这里要找前一位，插入后面
 s->next=p->next;
 p->next=s;
}
bool DeList(List L,int i){
  List p,s;
  if(i<0)   return ERROR
  else if(i==1){
  s=L;
  L=L->next;
  if(L)
  free (s);
  return L;
}
    else
    p=FindN(L,i-1);
    if(p==NULL) return Null;
    if(p->next==NULL)   return NULL;
    s=p->next;
    p->next=s->next;
    free(s);
    return L;
}
