// Write a C++ program to take two 2-D array as input of order 3*3 and print the sum of two 2-D array

#include <iostream>
using namespace std;
int main()
{
    int a[3][3], b[3][3], c[3][3];
    cout << "Enter elements of first matrix" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << "Enter elements of second matrix" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> b[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }   
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << c[i][j] << " ";
        }   
        cout << endl;
    }

    return 0;
}