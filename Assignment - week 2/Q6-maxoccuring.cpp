//Write a C++ program to find maximum occurring integer in an array. 

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
    int max=arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>m)
        {
            m=arr[i];
        }
    }
    cout << m;
}