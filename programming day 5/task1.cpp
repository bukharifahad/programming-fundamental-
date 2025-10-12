#include<iostream>
using namespace std;
int main()
{
string tem,hum;
cout<<"enter temperature (warm/cold)";
cin>>tem;
cout<<"enter humidity(humd/dry)";
cin>>hum;
if(tem=="warm")
{
    if(hum=="dry")
    cout<<"Play tennis ";
}
if(tem=="warm")
{
    if(hum=="humid")
    cout<<"swim ";
}
if(tem=="cold")
{
    if(hum=="humid")
    cout<<"Watch tv  ";
}
if(tem=="cold")
{
    if(hum=="dry")
    cout<<"Play basketball  ";
}
return 0;
}