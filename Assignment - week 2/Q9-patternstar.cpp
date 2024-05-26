/*
Write a C++ program to print the following pattern using loop
* * * * *
* * * *
* * *
* *
*

*/

#include<iostream>
using namespace std;

int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    for(i=4;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}