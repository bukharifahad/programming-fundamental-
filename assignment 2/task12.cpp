#include<iostream>
using namespace std;
int main()
{
int a,b,c;
cout<<"number of square meters you can paint.";
cin>>a;
cout<<"width of a single wall in meters.";
cin>>b;
cout<<"height of a single wall in meters.";
cin>>c;
int f=b*c;
int e=a/f;
cout<<"numbers of wall you can paint"<<e;
return 0;


}