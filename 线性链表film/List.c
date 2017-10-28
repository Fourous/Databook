#include "List.h"
//初始化链表
static CopyNode(Item item,Node *pnode){
  pnode->item=item;//取出结构体中包含的数据项
}

Node List
void Initial(List *plist){
  plist=NULL;
}
//判断为满
bool ListFull(const List *plist){
    Node *pt;
    pt=(Node *)malloc(sizeof(Node));
    if(pt==NULL)//malloc和free都是对地址进行操作，所以判断也是地址形式！
      return true;
      else return false;
}//没有太大意义，内存装满即为满，可以改进！最好指定最大值。
//判断为空
bool ListEmpty(const List *plist){
  if(*plist==NULL)
      return true;
      else return false;
}
//计算链表中元素个数
unsigned int Count(const List *plist){//Node *List;
  unsigned int count=0;
  Node *pnode=*plist;
  while (pnode==NULL) {
    ++count;
    pnode=pnode->next;
  }
}
bool AddItem(Item item,List *plist){
    Node *pnew;
    Node *scan=*plist;
    pnew=(Node *)malloc(sizeof(Node));
    if(pnew==NULL)
    return false;
    else{
      CopyNode(item,pnew);
    pnew->next=NULL;
  }
  if(scan==NULL){
    scan=pnew;
  }
  else {
    while (scan->next!= NULL)
      scan=scan->next;
      scan->next=pnew;
  }
}
void Traverse(const List *plist,void (*pfun)(Item item)){
  Node *pnode=*plist;
  while(pnode->next!=NULL){
      (*pfun)(pnode->item);
      pnode=pnode->next;
  }
}
void Empty(List *plist){
  Node *psave;
  while(*plist!=NULL){
    psave=(*plist)->next;//保存下个节点地址
    free(*plist);//*plist是地址！！！
    *plist=psave;
  }
}
