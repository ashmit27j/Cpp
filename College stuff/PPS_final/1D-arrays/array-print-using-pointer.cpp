#include<iostream>
using namespace std;
int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int *ptr = &arr[0];
    //find length of array using size of 
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i < size; i ++ )
    {
        cout << *ptr;
        ++ptr;
    }
}