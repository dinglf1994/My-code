//---------------------快速排序-------------------------
//-----时间复杂度：O(nlgn)-----
#include<iostream>
#include<stdlib.h>
using namespace std;

class QuickSort
{
    public:
    int partition(int arr[],int left,int right);
    void Qusort(int arr[],int left,int right);
    void sort(int arr[]);
    int Get_lenght(int arr[]);
    void swap(int arr[],int i,int j);
};

int QuickSort::partition(int arr[],int left,int right)
{
    int l = Get_lenght(arr);
    //cout << l <<endl;
    if(arr == NULL || l == 0)
    return -1;
    int pivotKey = arr[left];
    /*
    int pivotPointer = left;
    while(left < right)
    {
        while(left < right && arr[right] >= pivotKey)
        right--;
        while(left < right && arr[left] <= pivotKey)
        left++;
        swap(arr,left,right);
    }
    swap(arr,pivotPointer,left);
    */
    ///优化---左右覆盖---
    while(left < right)
    {
        while(left < right && arr[right] >= pivotKey)
        right--;
        arr[left] = arr[right];
        while(left < right && arr[left] <= pivotKey)
        left++;
        arr[right] = arr[left];
    }
    arr[left] = pivotKey;
    //cout << left << "  ";
    return left;
}

void QuickSort::Qusort(int arr[],int left,int right)
{
    if(left>=right)
    return ;
    int pivotPos = partition(arr,left,right);
    Qusort(arr,left,pivotPos-1);
    Qusort(arr,pivotPos+1,right);
}

void QuickSort::sort(int arr[])
{
    int l = Get_lenght(arr);
    if(arr == NULL || Get_lenght(arr) == 0)
    return ;
    Qusort(arr,0,l-1);
}

void QuickSort::swap(int arr[],int i,int j)
{
    int x = arr[i];
    arr[i] = arr[j];
    arr[j] = x;
}
int QuickSort::Get_lenght(int arr[])
{
    int i = 0;
    while(arr[i+1] != '\0')
    {
            i++;
    }
    return i+1;
}
