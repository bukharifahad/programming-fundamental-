#include<iostream>
using namespace std;
int main()
{
string m;
float a,b,c;
cout<<"enter the month name"<<endl<<"may, june, july, august, september or october";
cin>>m;
cout<<"enter the number of stays in integer ";
cin>>a;
if(m=="may"||m=="october")
{
    b=a*50;
    if (a>7&&a<=14)
    {
    float d=(5/100.0)*b;
    float total=b-d;
    cout<<"studio:"<<total;
    }
    else if(a>14) 
    {
        float x=(30/100.0)*b;
        float y=b-x;
        cout<<"studio"<<y;
    }
    else
    cout<<"studio"<<b;
}
if (m=="may"||m=="october")
{
   c=a*65;
   if(a>14)
   {
    float e=(10/100.0)*c;
    float tot=c-e;
    cout<<"appartment:"<<tot;
   }
   else 
   cout<<"appartment:"<<c;
}
if(m=="june"||m=="september")
{
    b=a*75.20;
    if (a>14)
    {
    float d=(20/100.0)*b;
    float total=b-d;
    cout<<"studio:"<<total;
    }
    else 
    cout<<"studio"<<b;
}
if (m=="june"||m=="september")
{
   c=a*68.70;
   if(a>14)
   {
    float e=(10/100.0)*c;
    float tot=c-e;
    cout<<"appartment:"<<tot;
   }
   else 
   cout<<"appartment:"<<c;
}
if(m=="july"||m=="august")
{
    b=a*76;
    cout<<"studio:"<<b;
}
if(m=="july"||m=="august")
{
    c=a*77;
    float e=(10/100.0)*c;
    float tot=c-e;
    cout<<"appartment:"<<tot; 
}
return 0;
}