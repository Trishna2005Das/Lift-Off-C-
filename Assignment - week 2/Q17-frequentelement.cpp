//Write a C++ program to find the most frequent element in an array of integers. 

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int max=arr[0];
    int count=1;
    for(int i=1;i<n;i++)
    {   
        if(arr[i]==arr[i-1])
        {
            count++;
        }
        else
        {
            if(count>max)
            {
                max=count;
            }
            count=1;
        }
    }   
    if(count>max)
    {
        max=count;
    }

    cout<<"The most frequent element is: "<<max;
    return 0;
}