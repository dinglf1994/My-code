///---------------------插入排序-------------------
///----时间复杂度：O(n^2)----
#include<iostream>
#include<stdlib.h>
using namespace std;

class InsertSort
{
public:
    bool ISort(int arr[]);
    int Get_Length(int arr[]);
};
bool InsertSort::ISort(int arr[])
{
    int l = Get_Length(arr);
    if(arr == NULL || l ==0)
        return false;
    for(int i = 1; i<l; i++)
    {
        int j = i;
        int target = arr[i];
        while(j > 0 && target < arr[j-1])
        {
            arr[j] = arr[j - 1];
            j--;
        }
        arr[j] = target;
    }
    return true;
}
int InsertSort::Get_Length(int arr[])
{
    int i = 0;
    while(arr[i+1]!='\0')
        i++;
    return i+1;
}
