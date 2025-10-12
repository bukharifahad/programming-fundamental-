#include<iostream>
using namespace std;
int main()
{
    int a=10000,b=50000,advance;
    advance= a+(a*0.5)*6;
    if (advance==b)
    {
        cout<<"he can buy laptop";
    }
    if(advance!=b)
    cout<<"he cannot buy the laptop";
    int c=(a*0.5)+advance;
    if(c==b)
    {cout<<"he can buy ";
    }

 int d=(a*0.5)+c;

 if(d==b)
 {cout<<"he can you the laptop with 8 month of his salery";}
 return 0;
}