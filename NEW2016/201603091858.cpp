#include<stdlib.h>
#include<iostream>
using namespace std;
#define OK 1;
#define ERROR 0;
#define OVERFLOW -2;
#define LIST_INIT_SIZE 100
#define LISTINCREAMENT 10
typedef long ElemType;
typedef struct
{
    ElemType *elem;
    int length;
    int listsize;
}SqList;
int InitList_Sq(SqList &L){
    L.elem = (ElemType *)malloc(LIST_INIT_SIZE * sizeof(ElemType));
    if(!L.elem){
        exit(-2);
    }
    L.length = 0;
    L.listsize = LIST_INIT_SIZE;
    return OK;
}
int ListInsert_Sq(SqList &L,int i,int e){
    if(i<1 || i>L.length + 1) return ERROR;
    if(L.length >= L.listsize){
        ElemType *newbase = (ElemType *)realloc(L.elem,(L.listsize + LISTINCREAMENT) * sizeof(ElemType));
        if(!newbase)exit(-2);
        L.elem = newbase;
        L.listsize += LISTINCREAMENT;
    }
    ElemType *q = &(L.elem[i - 1]);
    for(ElemType *p = &(L.elem[L.length-1]);p>=q;--p){
        *(p + 1) = *p;
    }
        *q = e;
        ++L.length;
        return 1;
}
void Show_Sq(SqList &L){
    for(int t = 0;t<L.length;t++){
        cout << L.elem[t] <<"  "  ;
    }
}
int main(){
    SqList L;
    InitList_Sq(L);
    for(int i = 1;i<300;i++){
        ListInsert_Sq(L,i,i+1);
    }
    Show_Sq(L);
    return 0;

}

