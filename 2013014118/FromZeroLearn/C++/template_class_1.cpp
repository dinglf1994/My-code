/*#include"class_2.h"
#include<iostream>
#include<cstdlib>

using namespace std;

struct Student
{
    int id;
    float avg;
};

template <class T>
class Datehouse
{
    private:
    T item;
    bool saved;
    public:
    Datehouse(void);
    T getitem(void);
    void putitem(T x);
};
template<class T>
Datehouse<T>::Datehouse(void){saved = false;};
template<class T>
T Datehouse<T>::getitem(void)
{
    if(!saved)
    {
        cout << "error, no date!" <<endl;
        exit(1);
    }
    return item;
}
template<class T>
void Datehouse<T>::putitem(T x)
{
    saved = true;
    item = x;
}

int main()
{
    T t1;
    cout << t1.max() <<endl;
    Student stu1 = {MAX,89};
    Datehouse<int> dh1,dh2;
    Datehouse<Student> dh3;
    Datehouse<double> dh4;
    dh1.putitem(2);
    dh2.putitem(-6);
    cout << dh1.getitem() << dh2.getitem() << endl;
    cout << dh3.getitem().id <<endl;
    cout << dh4.getitem() << endl;
    return 0;
}*/
