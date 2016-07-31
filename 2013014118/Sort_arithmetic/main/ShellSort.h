///-------------希尔排序----------
///-------------时间复杂度：O(n^1.3)-----
#include"HeapSort.h"
class ShellSort
{
  public:
  void ShellInsert(H &h,int d );
  void shellSort(H &h);
};

void ShellSort::ShellInsert(H &h,int d)
{
    for(int i = d;i<h.length;i++)
    {
        int j = i - d;
        int temp = h.arr[i];
        while(j >= 0 && h.arr[j] > temp)
        {
            h.arr[j + d] = h.arr[j];
            j -= d;
        }
        if(j != i - d)
        h.arr[j+d] = temp;
    }
}

void ShellSort::shellSort(H &h)
{
    if(h.listsize == 0 || h.length == 0)
    return ;
    int d = h.length/2;
    while(d >= 1)
    {
        ShellInsert(h,d);
        d /= 2;
    }
}
