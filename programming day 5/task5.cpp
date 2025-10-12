#include<iostream>
using namespace std;
int main()
{
    char a,z;
    int b;
    cout<<"enter the type of service"<<endl<<"for regulaer press r or R"<<endl<<"for premier service press p or P"<<endl;
    cin>>a;
    cout<<"number of nimutes you are talking";
    cin>>b;
    if(a =='r'||a =='R')
    {
      if(b>50)
     {
       int c=50-b;
       int d=50*10;
       float e=c*0.20;
       int total=d+e;

       cout<<"the total bill ="<<total;
      }
       else
        cout<<"total bill 10$";
    }
else if(a =='p'||a =='P')
{
 cout<<"day for d or D"<<endl<<"nigh for n or N";
 cin>>z;

 if(z =='d'||z =='D')
    {
        if(b>75)
     {
       int c=b-75;
       float e= 25+ c*0.10;

       cout<<"the total bill ="<<e;
     }
       else
       cout<<"your bill is 25$";
    }
 else if(z =='n'||z =='N')
    {
        if(b > 100)
        {
       int c = b - 100;
       float e = 25 + c * 0.05;

       cout<<"the total bill ="<<e;
    }
     else
       cout<<"your call bill is 25$";
    }
    
}
else
    cout<<"error enter correct character";
    return 0;

}