#include<iostream>
using namespace std;
int main()
{
    string name;
    int a,b,c,d,e,f,g,h,i;
    cout<<"Enter the movie name";
    cin>>name;
    cout<<"adult ticket price";
    cin>>a;
    cout<<"child ticket price";
    cin>>b;
    cout<<"The number of adult tickets sold.";
    cin>>c;
    cout<<"The number of child tickets sold.";
    cin>>d;
    cout<<"Percentage of the amount to be donated to the charity.";
    cin>>e;
    f=a*c;
    g=b*d;
    h=g+f;
    cout<<" Total amount generated= "<<h<<endl;
    i=e/100.0*h;
    cout<<" donated to the charity "<<i<<endl;
    int j=h-i;
    cout<<" the amount remaining ="<<j<<endl;
    return 0;

}