#include<iostream>
using namespace std;
int main()
{
    string n1,n2,n3;
    int a,b,c;
    cout<<"enter name of 1st person";
    cin>>n1;
     cout<<"enter name of 2nd person";
    cin>>n2;
    cout<<"enter name of 3rd person";
    cin>>n3;
     cout<<"enter age of 1st person";
    cin>>a;
     cout<<"enter age of 2nd person";
    cin>>b;
     cout<<"enter age of 3rd person";
    cin>>c;
    if(a>b&&c>b)
    cout<<n2;
    if(b>a&&c>a)
    cout<<n1;
    if(a>c&&b>c)
    cout<<n3;
    return 0;
}
st