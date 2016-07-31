///*---------------------类模板的友元函数--------------
/*----------------------(1):普通非模板类或函数的友元声明---------
template<class T>
class S
{
    ...
    friend void fun();
    ...
};
-------------------------(2):类模板或函数模板的友元声明----------
class<class T>
class S
{
    ...
    template<class T>
    friend void friend(T u);
    ...
}
--------------------------(3):只授予对类模板或函数模板的特定实例的访问权的友元声明---------
template<class T>
class S
{
    ...
    friend void fun<T>(T u);
    ...
}
--------------------------------------------------------------------------------------------
*/
///-----实现一个三维坐标的点模板，并定义友元函数来判断两点是否重合--------
#include"class_2.h"
#include<cmath>
template<class T>

class cPoint
{
    protected:
    T x,y,z;
    public:
    cPoint(T a = 0,T b = 0,T c = 0):x(a),y(b),z(c) {};
    friend bool operator ==(const cPoint<T> &x1,const cPoint<T> &x2)
    {
        return (x1.x == x2.x)&&(x1.y == x2.y)&&(x1.z == x2.z);
    }
    virtual T distance(const cPoint &);
};

template<class T>
T cPoint<T>::distance(const cPoint &x1)
{
    if(*this == x1)
    {
        return T(0);
    }
    T dis = (T)sqrt(pow(x1.x-x,2)+pow(x1.y-y,2)+pow(x1.z-z,2));
    return dis;
}

int main()
{
    cPoint<double> cP1(1.0,2.0,3.0),cP2(3.0,4.0,5.0);
    cout << cP1.distance(cP2) <<endl;
    return 0;
}
