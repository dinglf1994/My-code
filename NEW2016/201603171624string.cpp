#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<stdio.h>
using namespace std;

#define OK 1
#define MAXSTRLEN 255

typedef char SString[MAXSTRLEN+1];

int Index(SString S,SString T,int pos)
{
    int i = pos,j = 1;
    //cout<< int(T[0]) <<endl;
    while(i<=int(S[0])&&j<=int(T[0]))
    {
        if(S[i] == T[j])
        {
            ++i;
            ++j;
        }
        else
        {
            i = i-j+2;
            j=1;
        }
    }
    //cout << j <<endl;
    //cout << i <<endl;
    if(j > int(T[0])){
        cout<< i-int(T[0]);
    }
    else{
        cout << "not exit" <<endl;
    }
}
int StrAssign(SString &T,char *chars){
    int i;
    if(strlen(chars)>MAXSTRLEN)
        return -1;
    else{
        T[0] = strlen(chars);
        for(i = 1;i<=T[0];i++){
            T[i] = *(chars+i-1);
        }
        return OK;
        }
}
int GetLen() {}
int main()
{
    SString S;
    SString T;
    char *chars;
    char *chars2;
    char char1[256],char2[256];
    cout << "input string S" << endl;
    cin>>char1;
    cout << "input string T" << endl;
    cin>>char2;
    chars = char1;
    chars2 = char2;
    StrAssign(S,chars);
    StrAssign(T,chars2);
    //cout << int(S[0]) <<endl;
    //cout << int(T[0]) <<endl;
    Index(S,T,1);
    return 0;
}
