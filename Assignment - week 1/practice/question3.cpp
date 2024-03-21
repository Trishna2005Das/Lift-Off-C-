#include<iostream>
using namespace std;
int main()
{ float l;
cout<<"enter length in centimeters"<<endl;
cin>>l;
cout<<"in meters"<<(l*0.01);
cout<<"in kilometers"<<(l*0.001);
return 0;
}