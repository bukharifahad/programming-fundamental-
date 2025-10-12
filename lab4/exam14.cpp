#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"enter total bill of customer";
    cin>>a;
    if(a>=5000){
    int b=(5/100.0)*a;
    cout<<"total discount is ="<<b;
    }
    if (a<=5000)
    {
        int c=(10/100.0)*a;
        cout<<"total discount="<<c;
    }return 0;
}
