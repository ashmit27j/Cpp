#include<iostream>
using namespace std;
int countDigits(int num)
{
    int count = 0;
    while(num!=0)
    {
        ++count;
        num/=10;
    }
}
int pow(int base, int expo)
{
    int pow = 1;
    for(int i = 1; i <= expo; i ++ )
    {
        pow *= base; 
    }
    return pow;
}
bool checkIfArmstrong(int num)
{
    int digits = countDigits(num), rem, sum = 0, temp = num;
    while(num!=0)
    {   
        rem = num % 10;
        sum += pow(rem, digits);
        num /= 10; 
    }
    if (sum == temp)
        return true;
    else
        return false;
}
int main()
{
    int n1, n2;
    cin >> n1 >> n2;
    for(int i = n1; i <= n2; i ++ )
    {
        if(checkIfArmstrong(i))
            cout << i << ", ";
    }
}