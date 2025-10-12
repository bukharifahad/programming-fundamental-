#include<iostream>
using namespace std;
int main()
{
int a,b,c,d,e;
cout<<"enter the size of the fertilizer bag in pounds=";
cin>>a;
cout<<"Enter the cost of the bag$=";
cin>>b;
cout<<"Enter the area in square feet that can be covered by the bag.";
cin>>c;
d=b/a;
cout<<"the cost of the fertilizer per pound=$"<<d<<endl;
e=a*c;
cout<<"the cost of fertilizing the area per square foot.$"<<e;
return 0;




}