#include<iostream>

using namespace std;

class S
{
    public:
    ~S(){ cout << "S" << "\t";}
};
 char fun0()
 {
    S s1;
    throw('T');
    return '0';
 }
int main()
{
    try
    {
        cout << fun0() << "\t";

    }
    catch(char c)
    {
        cout << c << "\t";
    }
}
