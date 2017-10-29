#include <stdio.h>
#include <stdbool.h>
//递归遍历
void PreOrderTraversal(Btree B){
  while (B) {
    printf("%d\n",B->data );
    PreOrderTraversal(B->left);
    PreOrderTraversal(B->right);
  }
}
void InOrderTraversal(Btree B){
  while (B) {
    InOrderTraversal(B->left);
    printf("%d\n",B->data );
    InOrderTraversal(B->right);
  }
}
void PostOrderTraversal(Btree B){
  while (B) {
    PostOrderTraversal(B->left);
    PostOrderTraversal(B->right);
    printf("%d\n",B->data );
  }
}

//非递归遍历
//前序，中序遍历都是用堆栈实现的
//后序遍历用队列实现
void PreOrderTraversal(Btree B){
  Btree s;
Stack s=InitStack(MAXSIZE);//创造堆栈
while (!EmptyStack(s)||B!=NULL) {
  while (B!=NULL) {//判断
    printf("%d\n", B->data);
    push(B);
    B=B->left;
  }
  while (!StackEmpty) {
    B=pop(B);
    B=B->right;
  }
}
}
void InOrderTraversal(Btree B){
  Btree s;
Stack s=InitStack(MAXSIZE);//创造堆栈
while (!EmptyStack(s)||B!=NULL) {
  while (B!=NULL) {//判断
    push(B);
    B=B->left;
  }
  while (!StackEmpty) {
    B=pop(s);
    printf("%d\n",B->data );
    B=B->right;
  }
}
}
void PostOrderTraversal(Btree B){

}
