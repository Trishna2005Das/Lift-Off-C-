#include<iostream>
using namespace std;
int main()
{ cout<<"enter sides of a triangle"<<endl;
float a,b,c;
cin>>a>>b>>c;

if(a==b && b==c && c==a)
{
    cout<<"equilateral triangle"<<endl;
}
else if(a==b || b==c || b==a)
{
    cout<<"isosceles triangle"<<endl;
}
else{
    cout<<"scalene triangle"<<endl;
}
return 0;
}
