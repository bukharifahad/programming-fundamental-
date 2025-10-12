#include<iostream>
using namespace std;
int main()
{
    int inches;
    cout<<"enter inches=";
    cin>>inches;
    float a=inches/12.0;
    float b=inches%12;
    cout<<"inches are in feet="<<a;
    return 0;
}