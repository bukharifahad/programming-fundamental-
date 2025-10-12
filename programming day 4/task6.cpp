#include<iostream>
using namespace std;
int main()
{
int a;
cout<<"enter speed";
cin>>a;
if(a<=10)
cout<<"slow";
else if (a<=50)
cout<<"average";
else if(a<=150)
cout<<"fast";
else if(a<=1000)
cout<<"ultra fast";
else
cout<<"Extremely fast";
return 0;
}