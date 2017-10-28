#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define Max 50

typedef struct film{
  char name[Max];
  int rating;
};
typedef struct film Item;

typedef struct node {
  Item item;
 struct node *next;
}Node;//Node 是struct node 的一个别名
//也可以*LinkList,表示结构体指针
//Node *n或者*ListList l;

typedef Node *List;
//Node 就是指一个节点，List是指向第一个节点的，也就是一个链表
//开始写函数
//plist 是链表，加const是指为定值，加入清除元素，其他都用const修饰
void Initial(List *plist);
bool ListFull(const List *plist);
bool ListEmpty(const List *plist);
unsigned int Count(const List *plist);
bool AddItem(Item item,List *plist);
void Traverse(const List *plist,void (*pfun)(Item item));
void Empty(List *plist);
