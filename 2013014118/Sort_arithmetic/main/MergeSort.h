///------------归并排序-----------
///-------时间复杂度:(nlogn)----------

#include"HeapSort.h"

class MergeSort
{
    public:
    void mergeSort(H &h)
    {
        mSort(h.arr,0,h.length-1);
    }
    void mSort(int arr[],int left,int right);
    void merge(int arr[],int left,int mid,int right);
};

void MergeSort::mSort(int arr[],int left,int right)
{
    if(left >= right)
    return ;
    int mid = (left + right) / 2;
    mSort(arr,left,mid);
    mSort(arr,mid+1,right);
    merge(arr,left,mid,right);
}

void MergeSort::merge(int arr[],int left,int mid,int right)
{
    int *temp = new int[right - left + 1];
    int i = left;
    int j = mid + 1;
    int k = 0;
    while(i <= mid && j <= right)
    {
        if(arr[i] <= arr[j])
        {
            temp[k++] = arr[i++];
        }
        else
        temp[k++] = arr[j++];

    }
    while(i <= mid)
    {
        temp[k++] = arr[i++];
    }
    while(j <= right)
    {
        temp[k++] = arr[j++];
    }
    for(int p = 0;p < k;p++)
    {
        arr[left + p] = temp[p];
    }
}
