#include<iostream>
using namespace std;
int main()
{
    string name;
    int a,b,c;
    cout<<"enter the country name";
    cin>>name;
    cout<<"Enter the price of ticket";
    cin>>a;
    if(name == "island")
    {
        b=10/100.0*a;
        int d=a-b;
    cout<<"total price of ticket"<<a<<endl<<"discount price ="<<d;
    }
    else{
    c=5/100.0*a;
    int e=a-c;
    cout<<"discount price ="<<e;
    }
    return 0;
}