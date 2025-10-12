#include<iostream>
using namespace std;
int main()
{
    string name;
    int a;
    cout<<"enter the date of birth";
    cin>>a;
    cout<<"enter the month of birth";
    cin>>name;
    if(name=="march"||name=="april")
    {
        if(a>=20 && a<=30||a>=1 && a<=19)
        cout<<"aries";
    }
    else if(name=="april"||name=="may")
    {
        if(a>=20 && a<=30||a>=1 && a<=20)
    
        cout<<"taurus";
    }
    else if(name=="may"||name=="june")
    {
        if(a>=21 && a<=30||a>=1 && a<=20)
    
        cout<<"Gemini ";
    }
     else if(name=="june"||name=="july")
    {
        if(a>=21 && a<=30||a>=1 && a<=22)
    
        cout<<"Cancer";
    }
     else if(name=="july"||name=="august")
    {
        if(a>=23 && a<=30||a>=1 && a<=22)
    
        cout<<"Leo ";
    }
     else if(name=="august"||name=="september")
    {
        if(a>=23 && a<=30||a>=1 && a<=22)
    
        cout<<"Virgo ";
    }
     else if(name=="september"||name=="october")
    {
        if(a>=23 && a<=30||a>=1 && a<=22)
    
        cout<<"Libra";
    }
     else if(name=="october"||name=="november")
    {
        if(a>=23 && a<=30||a>=1 && a<=21)
    
        cout<<"Scorpio";
    }
     else if(name=="november"||name=="december")
    {
        if(a>=22 && a<=30||a>=1 && a<=21)
    
        cout<<"Sagittarius";
    }
     else if(name=="december"||name=="january")
    {
        if(a>=22 && a<=30||a>=1 && a<=19)
    
        cout<<"Capricorn";
    } else if(name=="january"||name=="february")
    {
        if(a>=20 && a<=30||a>=1 && a<=18)
    
        cout<<"Aquarius";
    } else if(name=="february"||name=="march")
    {
        if(a>=19 && a<=30||a>=1 && a<=20)
    
        cout<<"Pisces";
    }
    return 0;
}