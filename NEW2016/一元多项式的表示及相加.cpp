#include<iostream>
#include<stdlib.h>
using namespace std;

typedef struct LNode{
    int q1;
    int e1;
    struct LNode *next;
}LNode,*LinkList;

LinkList Init(LinkList L){
    LinkList x1,x2;
    L = (LinkList)malloc(sizeof(LNode));
    L->next = NULL;
    L->next = x1;
    x2 = L;
    int m;
    for(int i = 0;i<5;i++){
        x1 = (LinkList)malloc(sizeof(LNode));
        cout << "input "<<i+1<<endl;
        cin >>m;
        x1->q1 = m;
        x1->e1 = i;
        x1->next = NULL;
        x2->next = x1;
        x2 = x1;
    }
    //cout<<"aa"<<endl;
    return L;
}

void ShowLink(LinkList L){
        LinkList q = L->next;
        while(q!=NULL){
            cout <<q->q1<<"x^"<<q->e1;
            if(q->next!=NULL)
            cout <<"+";
            q = q->next;
        }
}
int main(){
    LinkList L1,L2;
    L1 = Init(L1);
    ShowLink(L1);
    L2 = Init(L2);
    ShowLink(L2);
}
