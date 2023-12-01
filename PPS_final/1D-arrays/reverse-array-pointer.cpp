#include<iostream>
using namespace std;
int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int *ptr = &arr[0];
    int size = sizeof(arr)/sizeof(arr[0]);
    int cpy[size];
    for(int i = size - 1; i >= 0; i -- )
    {
        cpy[i] = *ptr;
        ++ptr;
    }
    int *ptr2 = &cpy[0];
    for(int i = 0; i < size; i ++ )
    {
        cout << *ptr2 << " ";
        ++ptr2;
    }
}