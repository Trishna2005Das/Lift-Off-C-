// Write a C++ program to  count the number of occurrences of a number in an array  using function.

#include <iostream>
using namespace std;
int main()
{
    int n, m, count = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cin >> m;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == m)
        {
            count++;
        }
    }
    cout << count;
}