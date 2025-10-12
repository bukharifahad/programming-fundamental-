#include<iostream>
using namespace std;
int main()
{
int current_population,number,month,future_population;
cout<<"enter the current population";
cin>> current_population;
cout<<"enter the birth rate per month";
cin>> number;
month=30*12;
future_population=current_population+(number*month);
cout<<"the future population is="<<future_population;
return 0;
}