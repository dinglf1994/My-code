#include<iostream>
#include<stdlib.h>
using namespace std;
#define OK 1
#define error -2
typedef int QElemType;
typedef int Status;
typedef struct QNode{
    QElemType data;
    struct QNode *next;
}QNode,*QueuePtr;

typedef struct {
    QueuePtr front;
    QueuePtr rear;
}LinkQueue;

Status InitQueue(LinkQueue &Q){
    Q.front = Q.rear = (QueuePtr)malloc(sizeof(QNode));
    if(!Q.front)exit(error);
    Q.front->next = NULL;
    return OK;
}

Status DestroyQueue(LinkQueue &Q){

    return OK;
}

Status ClearQueue(LinkQueue &Q){

    return OK;
}
Status QueueEmpty(LinkQueue Q){

    return OK;
}

Status QueueLength(LinkQueue Q){

    return OK;
}

Status GetHead(LinkQueue Q , QElemType &e){

    return OK;
}

Status EnQueue(LinkQueue &Q,QElemType e){
    QueuePtr p = (QueuePtr)malloc(sizeof(QNode));
    if(!p)exit(error);
    p->data = e; p->next = NULL;
    Q.rear->next = p;
    Q.rear = p;
    return OK;
}

Status DeQueue(LinkQueue &Q,QElemType &e){

    return OK;
}

/*Status QueueTraverse(LinkQueue Q,visit()){

    return OK;
}*/
Status ShowQueue(LinkQueue Q){
    while(Q.front->next!=NULL){
        cout << Q.front->next->data<<endl;
        Q.front = Q.front->next;
    }
    return OK;
}

int main(){
    LinkQueue Q;
    InitQueue(Q);
    EnQueue(Q,5);
    EnQueue(Q,19);
    EnQueue(Q,34);
    EnQueue(Q,45);
    ShowQueue(Q);
}
