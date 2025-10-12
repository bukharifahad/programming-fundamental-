#include<iostream>
using namespace std;
int main()
{
    float a,b;
    int c,d;
    cout<<"vegetable price per kilogram";
    cin>>a;
    cout<<"fruit price per kilogram";
    cin>>b;
    cout<<"total kilograms of vegetables";
    cin>>c;
    cout<<"total kilograms of fruits";
    cin>>d;
    int e=(a*c+b*d)/1.94;
    cout<<"the total earning in rupees"<<e;
    return 0;

}