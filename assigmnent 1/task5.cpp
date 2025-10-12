#include<iostream>
using namespace std;
int main()
{
	string name;
	int a,b,c;
	float d,e,f,g;
	cout<<"enter the name of student";
	cin>> name;
	cout<<"enter the matric marks (out of 1100)";
	cin>> a;
	cout<<"enter the inter marks (out of 550)";
	cin>>b;
	cout<<"enter the entry test marks(out of 400)";
	cin>> c;
	d=a/100*10;
	e=b/550*40;
	f=c/400*50;
	g=d+e+f;
	cout<<"the total aggrecate of student is="<<g;
	return 0;
	
}
