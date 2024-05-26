//Write a C++ program to take a 2-D array as input of order 3*3 and print the transpose of the 2-D array.

#include <iostream>
using namespace std;
int main()
{
    int a[3][3], b[3][3];
    cout << "Enter elements of first matrix" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            b[j][i] = a[i][j];
        }
    }
    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++)
        {
            cout << b[i][j] << " "; 
        }
        cout << endl;
    }

    return 0;
}