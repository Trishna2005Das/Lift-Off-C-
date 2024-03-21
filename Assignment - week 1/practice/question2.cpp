#include<iostream>
using namespace std;
int main()
{   
    double a,b,c,d,e;
    cout<<"enter marks of five subjects"<<endl;
    cin>>a>>b>>c>>d>>e;
    cout<<"Total-"<<a+b+c+d+e<<endl;
    cout<<"average-"<<(a+b+c+d+e)/5.0<<endl;
    cout<<"percentage-"<<((a+b+c+d+e)/500.0)*100<<endl;
    return 0;
}
