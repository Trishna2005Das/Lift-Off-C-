//Write a C++ program to copy the elements of one array into another array.

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int arr2[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        arr2[i]=arr[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr2[i]<<" ";
    }
    return 0;
}