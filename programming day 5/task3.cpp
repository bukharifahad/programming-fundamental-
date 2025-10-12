#include<iostream>
using namespace std;
int main()
{string name;
    int a,b,c,d,e;
    cout<<"enter the name of student";
    cin>>name;
    cout<<"enter english marks";
    cin>>a;
    cout<<"enter maths marks";
    cin>>b;
    cout<<"enter biology marks";
    cin>>c;
     cout<<"enter chemistry marks";
    cin>>d;
     cout<<"enter social sciencewmarks";
    cin>>e;
    int total_marks=a+b+c+d+e;
    cout<<"total marks ="<<total_marks<<endl;
    float per=(total_marks/500.0)*100;
    cout<<endl;
    cout<<"percentage="<<per<<endl;
    if(per>=90||per<=100)
     cout<<"a+";
    else if(per>=90||per<=100)
     cout<<"A+";
     else if(per>=80||per<90)
      cout<<"A";
    else if(per>=70||per<80)
     cout<<"B+";
    else if(per>=60||per<70)
     cout<<"B";
    else if(per>=50||per<60)
     cout<<"C+";
    else if(per>=40||per<50)
     cout<<"C";
     else
     cout<<"F";
     return 0;


}