#include<iostream>
#include<stdlib.h>
#define OK 1
#define ERROR 1
using namespace std;
typedef int ElemType;
typedef struct LNode{
    ElemType data;
    struct LNode *next;
}LNode,*LinkList;

int GetElem(LinkList L,int i,ElemType &e){
   LinkList p = L->next;            //查找第i个节点，并用e返回其值
   int j = 1;
   while(p&&j<i){
        p = p ->next;
        ++j;
   }
   if(!p||j>i) return ERROR;
   e = p ->data;
   return OK;
}
LinkList Init(LinkList L){
    LinkList p;    //test
    L=(LinkList)malloc(sizeof(LNode));
    p = (LinkList)malloc(sizeof(LNode));
    L->next=p;
    p ->data = 1;
    p->next = NULL;
    return L;
}
LinkList Put(LinkList L){
    LinkList p1,p2;     //递增产生10个节点的链表
    L = (LinkList)malloc(sizeof(LNode));
    L->next = NULL;
    L = p2;
    for(int i = 0;i<10;i++){
        p1 = (LinkList)malloc(sizeof(LNode));
        p1->data = i+1;
        p1->next=NULL;
        p2->next = p1;
        p2=p1;
        //cout <<i+1<<endl;
    }
    return L;
}
void Show(LinkList L){
    LinkList p = L->next;       //输出链表
    int i = 0;
    while(p!=NULL){
        cout << p->data<<endl;
        p = p->next;
    }
}
void ListDelete_L(LinkList L,int i){
    LinkList p1,p2;     //删除第i个节点
    p1 = L;
    int j=0;
    for(;j<i-1;j++){
        p1 = p1->next;
    }
    p2 = p1->next;
    p1->next = p2->next;
    free(p2);
}
int main(){
    LinkList L;
    L = NULL;
    int e;
    //L = Init(L);
    L = Put(L);
    Show(L);
    ListDelete_L(L,4);
    Show(L);
    //GetElem(L,3,e);
    //cout << e <<endl;
    return 0;
}
