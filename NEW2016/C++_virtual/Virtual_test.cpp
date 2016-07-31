#include<iostream>

using namespace std;

class T
{
    protected:
    int a;
    int b;
    public:
    virtual int add(int v1,int v2) = 0;
    T(int x1 = 0,int x2 = 0){
        a = x1;
        b = x2;
    }
};

class M:public T
{
    protected:
    T::a;
    T::b;
    public:
    int add(int v1,int v2){
        return a + b + v1 + v2;
    }
    M(int y1 =0,int y2 =0):T(y1,y2){
        a = y1;
        b = y2;
    }
};

int main(){
    T *p;
    M m2(10,10),m3(15,15);
    p = &m2;
    cout<< p->add(10,10) << "  " << m3.add(15,15) <<endl;
}

