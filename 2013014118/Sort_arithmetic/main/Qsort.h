///------------------------选择排序------------------
///---- 时间复杂度O(n^2)----
#include<stdlib.h>
#include<iostream>
using namespace std;
class Qsort
{
    public:
    //Qsort(){cout << "Qsort()" <<endl;};
    //~Qsort(){cout << "~Qsort()" << endl;}
    void qsort(int arr[]);
    void swap(int &a,int &b);
    void swap2(int arr[],int i,int j);
    int Get_length(int arr[]);
};
void Qsort::swap(int &a,int &b)
{
    int c;
    c = a;
    a = b;
    b = c;
}
void Qsort::swap2(int arr[],int i,int j)
{
    int x = arr[i];
    arr[i] = arr[j];
    arr[j] = x;
}
void Qsort::qsort(int arr[])
{
    int l = Get_length(arr);
    cout << l <<endl;
    for(int i = 0;i < l;i++)
    {
        int min = arr[i];
        int get_j = i;
        for(int j = i;j < l; j++)
        {
            if(min>arr[j])
            {
                min = arr[j];
                get_j = j;
            }
        }
        if(get_j!=i)
        swap2(arr,i,get_j);
    }
}
int Qsort::Get_length(int arr[])
{
    int i = 0;
    while(arr[i+1] != '\0')
    {
            i++;
    }
    return i+1;
}
