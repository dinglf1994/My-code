#include<iostream>
#define MAX  10008
using namespace std;
class T
{
    private:
    int a;
    int b;
    public:
    T(int x1 = 10,int x2 = 20)
    {
        a = x1;b = x2;
    }
    int max(){
        if(a < b)
        return b;
        else return a;
    }
};
