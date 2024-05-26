//Write a C++ program to convert a decimal number to a binary number using  functions

#include <iostream>
using namespace std;
int binarytodecimal(int n)
{
    int ans = 0;
    int x = 1;
    while (n > 0)
    {
        int lastdigit = n % 10;
        n = n / 10;
        ans = ans + lastdigit * x;
        x = x * 2;
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    cout << binarytodecimal(n);
}