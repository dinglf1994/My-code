///--------------������------------
///-----ʱ�临�Ӷȣ�O(nlgn)----------
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

void HeapSort::heapAdjust(H &h,int start,int end)///---�������˳����ʾ------���ڵ㣺(start-1)/2--
{
    int temp = h.arr[start];
    for(int i = 2*start+1; i <= end;)///-----�����ӽڵ��±�Ϊ��2*start+1 2*start+2---;
    {
        if(i+1 <= end && h.arr[i] < h.arr[i+1])///--����
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
void Init_H(H &h)///---��ʼ��˳���---
{
    h.arr = (int *)malloc(MAX_SIZE * sizeof(int));
    if(!h.arr)
        cout << "�����ڴ�ʧ�ܣ�����"<<endl;
    h.length = 0;
    h.listsize = MAX_SIZE;
}
void Put_H(H &h)
{
    int i = 0;
    int l;
    int p;
    cout << "�������Ա���:"<< endl;
    cin >> l;
    cout << "��������:";
    while(i<l)
    {
        cin >> p;
        h.arr[i] = p;
        i++;
    }
    h.length = i;
}
