#include<iostream>
using namespace std;
int main()
{ cout<<"enter year : ";
int y;
cin>>y;
((y%4==0 && (y%100!=0 || y%400==0))?cout<<y<<" is a leap year"<<endl:cout<<y<<" is not a leap year"<<endl);
}
