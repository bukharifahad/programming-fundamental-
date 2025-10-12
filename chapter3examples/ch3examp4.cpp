#include <iostream>
#include <cmath>
#include <string>
using namespace std;
const double PI = 3.1416;
int main(){
double sphereRadius,sphereVolume;
double point1X,point1Y,point2X,point2Y,distance;
string str;
cout<<"Enter the radius of the sphere: ";
cin>>sphereRadius;
cout<<endl;
sphereVolume=(4.0/3)*PI*pow(sphereRadius,3);
cout<<"The volume of the sphere is: "<<sphereVolume<<endl<<endl;
cout<<"Enter the coordinates of two points in the X-Y plane: ";
cin>>point1X;
cin>>point1Y;
cin>>point2X;
cin>>point2Y;
cout<<endl;
distance=sqrt(pow(point2X-point1X,2)+pow(point2Y-point1Y,2));
cout<<"The distance between the points ("<<point1X<<","<<point1Y<<") and ("<<point2X<<","<<point2Y<<") is: "<<distance<<endl<<endl;
str="Programming with C++";
cout<<"The number of characters, including blanks, in \""<<str<<"\" is: "<<str.length()<<endl;
return 0;}
