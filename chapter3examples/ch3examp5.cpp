#include <iostream>
using namespace std;
int main(){
int a,b;
cout<<"Enter values for a and b:"<<endl;
cin>>a;
cin.ignore(100,'\n');
cin>>b;
cout<<"a="<<a<<",b="<<b<<endl;
return 0;
}
