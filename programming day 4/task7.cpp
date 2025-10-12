#include<iostream>
using namespace std;
int main()
{
    string name;
float a,b,c,d;
cout<<"enter one of the following to calculate area"<<endl<<"square"<<endl<<"rectangle"<<endl<<"circle"<<endl<<"triangle"<<endl;
cin>>name;
if(name=="square")
{
    cout<<"square";
    cin>>a;
    b=a*a;
    cout<<b;
}
else if (name=="rectangle")
{
   cout<<"rectangle";
   cin>>a;
   cout<<endl;
   cin>>b;
   c=a*b;
   cout<<c;
}
else if (name=="circle")
{
   cout<<"cirle";
   cin>>a;
   c=a*a*3.1416;
   cout<<c;
}
else
{
   cout<<"triangle";
   cin>>a;
   cout<<endl;
   cin>>b;
   c=1/2.0*a*b;
   cout<<c;

}
return 0;
}
