///---------------冒泡排序------------------------
///----时间复杂度：O(n^2)----
/*
#include"main.h"

bool Bubble_Sort(int *arr);
bool swap(int *arr,int j,int i);
int Get_Length(int arr[]);
int main()
{
    int i = 0;
    char ch;
    ifstream in;
    in.open("main/1.txt");
    char buff[255];
    int arr[10] = {10,5,8,7,6,9,4,3,2,1};
    Bubble_Sort(arr);
    for(int j = 0;j<Get_Length(arr);j++)
    cout << arr[j] << " ";
    cout << Get_Length(arr);
    return 0;
}

bool Bubble_Sort(int *arr)
{
    if(Get_Length(arr) == 0 )
        return -1;
        for(int i = 0;i < Get_Length(arr);i++)
        {
            for(int j = Get_Length(arr)-1; j > i; j--)
            {
                if(arr[j]<arr[j-1])
                {
                    swap(arr,j,j-1);
                }
            }
        }
        return 0;
}

bool swap(int *arr,int j,int i)
{
    int m = arr[j];
    arr[j] = arr[i];
    arr[i] = m;
}
int Get_Length(int arr[])
{
    int i = 0;
    while(1)
    {
        if(arr[i+1] != '\0')
            i++;
            else
            break;
    }
    return i+1;
}
*/
