///*---------------------��ģ�����Ԫ����--------------
/*----------------------(1):��ͨ��ģ�����������Ԫ����---------
template<class T>
class S
{
    ...
    friend void fun();
    ...
};
-------------------------(2):��ģ�����ģ�����Ԫ����----------
class<class T>
class S
{
    ...
    template<class T>
    friend void friend(T u);
    ...
}
--------------------------(3):ֻ�������ģ�����ģ����ض�ʵ���ķ���Ȩ����Ԫ����---------
template<class T>
class S
{
    ...
    friend void fun<T>(T u);
    ...
}
--------------------------------------------------------------------------------------------
*/
///-----ʵ��һ����ά����ĵ�ģ�壬��������Ԫ�������ж������Ƿ��غ�--------
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
