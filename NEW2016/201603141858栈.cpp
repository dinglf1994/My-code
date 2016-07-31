#include<iostream>
#include<stdlib.h>
using namespace std;
#define OK 1
#define STACK_INIT_SIZE 100
#define STACKINCREMENT 10
typedef char SElemType;

typedef struct SqStack{
    SElemType *base;
    SElemType *top;
    int stacksize;
}SqStack;

int InitStack(SqStack &L){
    L.base = (SElemType *)malloc(STACK_INIT_SIZE * sizeof(SElemType));//����һ����ջL
    if(!L.base)exit(-2);
    L.top = L.base;
    L.stacksize = STACK_INIT_SIZE;
    return OK;
}

int DestroyStack(SqStack &L){
    //xiao hui zhan L
    return OK;
}

int StackLength(SqStack L){
    //yuan shu ge shu
    return OK;
}

int Push(SqStack &L,SElemType e){
    //cha ru yuan shu
    if(L.top-L.base >= L.stacksize){
        L.base = (SElemType *)realloc(L.base,(L.stacksize + STACKINCREMENT)*sizeof(SElemType));
        if(!L.base)exit(-2);
        L.top = L.base + L.stacksize;
        L.stacksize += STACKINCREMENT;
    }
    *L.top++ = e;
    return OK;
}

int GPiPei(SqStack L){
    InitStack(L);
    char g;
    cout << "��˳������Ҫƥ������� ���롮j������ ��"<<endl;
    cin >> g;
    Push(L,g);
    while(g != 'j'){
        cin>> g;
        if(*(L.top-1) == g-1 || *(L.top-1) == g-2){
            L.top = L.top-1;
        }
        else if(g!='j'){
            Push(L,g);
        }

    }
    if(L.base == L.top){
        cout << "pi pei success!"<<endl;
    }
    else{
        cout <<"pi pei defult!"<<endl;
    }
    return OK;

}

int ShowStack(SqStack L){
    while(L.top > L.base){
        cout << *--L.top;
    }
    return OK;
}
void Conversion(SqStack L){
    InitStack(L);
    int m;
    cout << "����ʮ���Ƶ�������" <<endl;
    cin >>m;
    while(m){
        Push(L,m % 8);
        m = m/8;
    }
    cout <<"ת��Ϊ�˽�����Ϊ��"<<endl;
    ShowStack(L);
}

int main(){
    SqStack L;
    GPiPei(L);
    //Conversion(L);
    /*InitStack(L);
    Push(L,3);
    Push(L,6);
    Push(L,9);
    Push(L,5);
    Push(L,19);
    ShowStack(L);
*/
}
