#include<iostream>
using namespace std;
int main()
{
    int size, ele, pos;
    cout << "Enter size: ";
    cin >> size;
    int arr[size + 1];
    for ( int i = 0; i < size; i++ )
    {
        cin >> arr[i];
    }
    cout << "Enter element you wish to insert: \n";
    cin >> ele;
    cout << "Enter pos you wish to insert it in: \n";
    cin >> pos;
    for ( int i = size; i >= 0; i-- )
    {
        if ( i == pos - 1 )
        {
            arr[pos] = ele;
            break;
        }
        else
        {
            arr[i] = arr[i - 1];
        }
    }
    for ( int i = 0; i < size + 1; i++ )
    {
        cout << arr[i] << " ";
    }
}