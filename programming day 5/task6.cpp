#include<iostream>
using namespace std;
int main()
{ 
 string name,z;
 float a,b;
cout<<"enter tha name of fruit "<<endl<<"banana/apple/orange/grapefruit/kiwi/pineapple/grapes";
cin>>name;
cout<<"enter a week days "<<endl<<"Monday/Tuesday/Wednesday/Thursday/Friday/Saturday/Sunday";
cin>>z;
if(z=="monday"||z=="tuesday"||z=="wednesday"||z=="thursday"||z=="friday")
{
  cout<<"enter the quantity of fruit";
  cin>>a;
  if (name=="banana")
  {
    b=a*2.5;
    cout<<b;
  }
  else if (name=="apple")
  {
    b=a*1.20;
    cout<<b;
  }
  else if (name=="orange")
  {
    b=a*0.85;
    cout<<b;
  }
  else if (name=="grapefruit")
  {
    b=a*1.25;
    cout<<b;
  }
  else if (name=="kiwi")
  {
    b=a*2.70;
    cout<<b;
  }
 else if (name=="pineapple")
  {
    b=a*5.50;
    cout<<b;
  } 
  else if (name=="grapes")
  {
    b=a*3.85;
    cout<<b;
  }
}
else if (z=="saturday"||z=="sunday")
{
  cout<<"enter the quantity of fruit";
  cin>>a;
    if (name=="banana")
  {
    b=a*2.70;
    cout<<b;
  }
  else if (name=="apple")
  {
    b=a*1.25;
    cout<<b;
  }
  else if (name=="orange")
  {
    b=a*0.90;
    cout<<b;
  }
  else if (name=="grapefruit")
  {
    b=a*1.60;
    cout<<b;
  }
  else if (name=="kiwi")
  {
    b=a*3.00;
    cout<<b;
  }
  else if (name=="pineapple")
  {
    b=a*5.60;
    cout<<b;
  } 
  else if (name=="grapes")
  {
    b=a*4.20;
    cout<<b;
  }

}
 return 0;
}