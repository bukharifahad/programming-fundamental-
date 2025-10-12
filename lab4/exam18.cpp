#include<iostream>
using namespace std;
int main()
{
char a;
cout<<"enter single character";
cin>>a;
if(a=='A'|| a=='a'||a=='E'||a=='e'||a=='E'||a=='i'||a=='I'||a=='o'||a=='O'||a=='U'||a=='u')
cout<<"vowel";
if(a>=1||a<=9)
cout<<"number";
else 
cout<<"consonent";
return 0;


}