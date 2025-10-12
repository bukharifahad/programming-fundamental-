#include<iostream>
using namespace std;
int main()
{
    int a,b,c,e,f,rem;
    cout<<"enter 4 digit number";
    cin>>a;
    b=a/1000;
    rem=a%1000;
    c=rem/100;
    rem=rem%100;
    e=rem/10;
    f=rem%10;
    cout<< "sum of indivisual number"<<b+c+e+f;
    return 0;


}