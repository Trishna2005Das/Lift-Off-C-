//Write a C++ program to take a 2-D array as input of order 3*3 and print the transpose of the 2-D array.

#include <iostream>
using namespace std;
int main()
{
    int arr[3][3];
    cout << "Enter the elements of the array: " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "The transpose of the array is: " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }
    return 0;
}