#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct BNode {
  int data;
  Btree left;
  Btree right;
}*Btree;

void PreOrderTraversal(Btree B);//前序遍历
void InOrderTraversal(Btree B);//中序遍历
void PostOrderTraversal(Btree B);//后序遍历
