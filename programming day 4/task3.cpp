#include<iostream>
using namespace std;
int main()
{
int a,b,c;
cout<<"temperature 1:";
cin>>a;
cout<<"temperature 2:";
cin>>b;
if(a>b)
c=a-b;
if(b>a)
c=b-a;
if(c>10)
cout<<"Difference is too Big"<<endl<<"Program end";
else
cout<<"Program end";
return 0;
}