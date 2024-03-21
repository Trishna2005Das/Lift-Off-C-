#include<iostream>
using namespace std;
int main()
{ cout<<"enter angles of a triangle"<<endl;
float a,b,c;
cin>>a>>b>>c;
if((int)(a+b+c)==180 && a>0 && b>0 && c>0)
{
    cout<<"triangle is valid";
}
else
{
    cout<<"triangle is not valid";
}
return 0;
}
