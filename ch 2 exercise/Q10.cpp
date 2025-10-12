#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  float a,b,c,d,e;
   cout<<"enter 5 decimal number";
   cin>>a>>b>>c>>d>>e;
  float add=a+b+c+d+e;
   int f= round(add);
   cout<<"the result of sum to the nearest integer is="<< f;
   return 0;
}