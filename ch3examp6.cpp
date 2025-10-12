#include <iostream>
using namespace std;
int main(){
char ch1,ch2;
cout<<"Enter a sentence:"<<endl;
cin>>ch1;
cin.ignore(100,'.');
cin>>ch2;
cout<<"ch1="<<ch1<<",ch2="<<ch2<<endl;
return 0;
}
