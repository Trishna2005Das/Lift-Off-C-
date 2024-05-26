//Write a C++ program to find the number of vowels and consonants in a string.

#include <iostream>
using namespace std;
int main()
{
    string s;
    cout << "Enter a string: ";
    getline(cin, s);
    int vowel = 0, consonant = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
        {
            vowel++;
        }
        else
        {
            consonant++;
        }
    }
    cout << "Number of vowels: " << vowel << endl;
    cout << "Number of consonants: " << consonant << endl;
}