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
    while(i<=S[0]&&j<=T[0])
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
    if(j > T[0]) return i - T[0];
    else cout << "Un" <<endl;
    return 0;
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
    char *chars = "qwerty";
    char *chars2 = "ty";
    /*int i = 0;
    char c;
    while((c = getchar()!='\0')){
        chars[i++] = c;
    }
    chars[i] = '\0';
    */
    //cout<<chars<<endl;
    StrAssign(S,chars);
    StrAssign(T,chars2);
    cout << S <<endl;
    cout << T <<endl;
    Index(S,T,1);
    return 0;
}

