#include<iostream>

using namespace std;

class T{
    private:
    int x1,x2,x3;
    protected:
    int a;
    public:
    int get_a();
    T(){
        x1 = 10;
        x2 = 10;
        x3 = 10;
        a = 10;
    }
    T(int b){
        x1 = 10;
        x2 = 10;
        x3 = 10;
        a = b+10;
    }
    friend int add(T &s1);
};
int T::get_a(){
    return a+10;
}
int add(T &s1){
    return s1.x1+s1.x2+s1.x3;
}

class M:public T{
    protected:
    T::a;
    int c;
    public:
    M():T(){
        c = 10;
    }
    M(int m,int n):T(){
        c = n+10;
    }
    int get_b();
};
int M::get_b(){
    return c;
};
int main(){
    T t1,t2(10);
    M m1,m2(10,10);
    cout << add(t2) << endl;
    cout << t1.get_a() <<t2.get_a() << endl;
    cout << m1.get_a() <<m2.get_a() << m2.get_b()<< endl;
}
