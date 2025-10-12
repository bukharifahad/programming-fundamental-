#include<iostream>
using namespace std;
int main()
{
    int a,b;
    float c;
    cout<<"enter imposter count";
    cin>>a;
    cout<<"Enter player count";
    cin>>b;
    c=100*(float)a/b;
    cout<<"chance to being an imposter="<<c<<"%";
    return 0;



}