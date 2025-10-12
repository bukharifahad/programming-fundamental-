#include<iostream>
using namespace std;
int main()
{
int initial_velocity,time,acceleration,finnal_velocity;
cout<<"Enter initial velocity";
cin>>initial_velocity;
cout<<"Enter time";
cin>>time;
cout<<"Enter accleration";
cin>>acceleration;
finnal_velocity=(acceleration*time)+initial_velocity;
cout<<"finnal_velocity="<<finnal_velocity;
return 0;


}