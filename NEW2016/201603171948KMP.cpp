#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>

using namespace std;

#define MAXSIZE 255
#define error -1
#define OK 0

int next[MAXSIZE+1];
int nextval[MAXSIZE+1];

typedef char SString[MAXSIZE+1];

int Assign(SString &T,char *chars){
    int j = 0;
    if(strlen(chars) > MAXSIZE){
        return error;
    }
    else{
        T[0] = strlen(chars);
        for(int i = 1;i<=int(T[0]);i++){
            T[i] = *(chars+i-1);
        }
        return OK;
    }

}
int KMP(SString T,SString S,int pos){
    /*for(int t = 1;t<10;t++){
    //    cout << next[t];
    //}*/
    int i = pos,j = 1;
    while(i <= int(T[0]) && j<=int(S[0])){
        if(j == 0 || T[i] == S[j]){
            ++i;
            ++j;
        }
        else{
            j = next[j];
        }
    }
    if(j > int(S[0])) cout<< i - int(S[0]) <<endl;
    else cout << "falut" << endl;
}
void get_next(SString T,int next[]){
    int i = 1,j = 0;    //nextº¯Êý
    next[0] = 0;
    while(i < int(T[0]) ){
        if( j == 0 || T[i] == T[j]){
            ++i;++j;next[i] = j;
        }
        else{
            j = next[j];
        }
    }
}

void get_nextval(SString T,int nextval[]){
    int i = 1,j = 0;nextval[1] = 0; //nextº¯ÊýÐÞÕý
    while(i < int(T[0])){
        if(j == 0 || T[i] == T[j]){
            ++i;
            ++j;
            if(T[i]!=T[j]) nextval[i] = j;
            else nextval[i] = nextval[j];
        }
        else j = nextval[j];
    }
}

int main(){
    SString T,S;
    char *chars1,*chars2;
    char char1[256],char2[256];
    cout << "input string T :" <<endl;
    cin >> char1;
    chars1 = char1;
    cout << "input string S :" <<endl;
    cin >> char2;
    chars2 = char2;
    Assign(T,chars1);
    Assign(S,chars2);
    //get_next(S,next);
    get_nextval(S,nextval);
    KMP(T,S,1);
    //cout << int(T[0]) <<endl;
}
