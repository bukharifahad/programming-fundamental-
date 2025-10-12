#include<iostream>
using namespace std;
int main()
{
int a,b,c,d;
float e,f,g,h;
cout<<"enter the number of red roses";
cin>>a;
cout<<"enter the number of white roses";
cin>>b;
cout<<"enter the number of tulip roses";
cin>>c;
d=a*2;
e=b*4.10;
f=c*2.50;
g=d+e+f;
cout<<"orignal price="<<g<<endl;
if (g>200)
{
h=20/100.0*g;
float z=g-h;
cout<<"Price after Discount:"<<z;
}
return 0;
}