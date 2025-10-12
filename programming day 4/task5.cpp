#include<iostream>
using namespace std;
int main()
{
int a,b,c,d,e,rem;
cout<<"Holidays:";
cin>>a;
b=365-a;
c=(b*63)+(a*127);
d=30000-c;
e=d/60;
rem=a%60;
if(c>30000)
{
cout<<"tom will run away"<<endl;
cout<<e<<"hours and"<<rem<<"minutes for play";
}
else
{
cout<<"Tom sleeps well"<<endl;
cout<<e<<"hours and"<<rem<<"minutes less for play";

}

}