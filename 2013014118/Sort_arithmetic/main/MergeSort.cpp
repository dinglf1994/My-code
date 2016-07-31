#include"MergeSort.h"

int main()
{
    H h;
    Init_H(h);
    Put_H(h);
    cout << h.length << endl;
    for(int i = 0;i<h.length;i++)
    {
        cout << h.arr[i] << " ";
    }
    cout << endl;
    MergeSort M;
    M.mergeSort(h);
    for(int i = 0;i<h.length;i++)
    {
        cout << h.arr[i] << " ";
    }
    //cout << endl;
    system("pause");
    return 0;
}
