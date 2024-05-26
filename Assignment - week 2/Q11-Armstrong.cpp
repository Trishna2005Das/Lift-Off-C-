//Write a C++ program to check whether a number is Armstrong or not

#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    int temp = num;
    int sum = 0;
    while (temp != 0)
    {
        int digit = temp % 10;
        sum += digit * digit * digit;
        temp /= 10;
    }
    if (sum == num)
    {
        cout << num << " is an Armstrong number." << endl;
    }
    else
    {
        cout << num << " is not an Armstrong number." << endl;
    }
    return 0;
}