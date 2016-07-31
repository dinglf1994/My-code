///--------------堆排序------------
///-----时间复杂度：O(nlgn)----------
#include<iostream>
#include<stdlib.h>
#define MAX_SIZE 100
using namespace std;

struct H
{
    int *arr;
    int length;
    int listsize;
};
/*
class HeapSort
{
public:
    void heapAdjust(H &h,int start,int end);
    void heapSort(H &h);
    void swap(int arr[],int i,int j);
};

void HeapSort::heapAdjust(H &h,int start,int end)///---这里堆用顺序表表示------父节点：(start-1)/2--
{
    int temp = h.arr[start];
    for(int i = 2*start+1; i <= end;)///-----左右子节点下标为：2*start+1 2*start+2---;
    {
        if(i+1 <= end && h.arr[i] < h.arr[i+1])///--调整
            i++;
        if(temp >= h.arr[i])
            break;
        h.arr[start] = h.arr[i];
        start = i;
        i = 2*start+1;
    }
    h.arr[start] = temp;
}

void HeapSort::heapSort(H &h)
{
    if(h.listsize == 0 || h.length == 0)
        return ;
    for(int i = h.length/2-1; i >= 0; i--)
    {
        heapAdjust(h,i,h.length-1);
    }
    for(int i = h.length-1; i>=0; i--)
    {
        swap(h.arr,0,i);
        heapAdjust(h,0,i-1);
    }
}

void HeapSort::swap(int arr[],int i,int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}
*/
void Init_H(H &h)///---初始化顺序表---
{
    h.arr = (int *)malloc(MAX_SIZE * sizeof(int));
    if(!h.arr)
        cout << "分配内存失败！！！"<<endl;
    h.length = 0;
    h.listsize = MAX_SIZE;
}
void Put_H(H &h)
{
    int i = 0;
    int l;
    int p;
    cout << "输入线性表长度:"<< endl;
    cin >> l;
    cout << "输入数据:";
    while(i<l)
    {
        cin >> p;
        h.arr[i] = p;
        i++;
    }
    h.length = i;
}
