#include <iostream>
using namespace std;
void search(int arr[], int high, int low, int mid, int ele)
{
    if (low > high)
    {
        cout << "\nElement not found";
        return;
    }
    if (arr[mid] == ele)
    {
        cout << "\nElement found!";
    }
    else if (arr[mid] > ele)
    {
        search(arr, mid - 1, low, (low + high) / 2, ele);
    }
    else if (arr[mid] < ele)
    {
        search(arr, high, mid + 1, (low + high) / 2, ele);
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, mid = (0 + 9) / 2, ele;
    cout << "Enter the element you wish to find: ";
    cin >> ele;
    search(arr, 9, 0, mid, ele);
}
