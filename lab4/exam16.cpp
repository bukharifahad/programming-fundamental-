#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter the first number";
    cin>>a;
    cout<<"press 1add if u want"<<endl;
    cout<<"press 2subtract if u want"<<endl;
    cout<<"press 3multiply if u want"<<endl;
    cout<<"press 4div if u want"<<endl;
    cin>>b;
    if (b==1)
    {
      cout<<"enter second numbr";
      cin>>c;
      int sub=a-c;
      cout<<"result"<<sub;
    }
    if (b==2)
    {
      cout<<"enter second numbr";
      cin>>c;
      int add=a+c;
      cout<<"result"<<add;
    }
    if (b==3)
    {
      cout<<"enter second numbr";
      cin>>c;
      int div=a/c;
      cout<<"result"<<div;
    }
if (b==4)
    {
      cout<<"enter second numbr";
      cin>>c;
      int mul=a*c;
      cout<<"result"<<mul;
    }
    return 0;
}