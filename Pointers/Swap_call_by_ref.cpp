#include <iostream>
using namespace std;
void swap(int *ptr1, int *ptr2)
{
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
    cout << "New values: \n";
    cout << *ptr1 << endl;
    cout << *ptr2 << endl;
}
int main()
{
    int a = 5, b = 10;
    cout << "Old values: \n";
    cout << a << endl;
    cout<<b<< endl;
    swap(&a, &b);
} // namespace std;
