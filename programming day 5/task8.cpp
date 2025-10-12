#include <iostream>
using namespace std;
int main()
{
    int examhrs,examMin,arrivalhrs,arrivalMin,examTime,arrivalTime,hrs,mint,early,late;
    cout<<"Enter exam time (hour ): ";
    cin>>examhrs;
    cout << "Enter Exam time (min)" ;
    cin>>examMin;
    cout<<"Enter student arrival time (hour ): ";
    cin>>arrivalhrs;
    cout << "Enter student arrival time (min)" ;
    cin>>arrivalMin;
    examTime= examhrs * 60 + examMin;
    arrivalTime= arrivalhrs * 60+ arrivalMin;
    if(arrivalTime==examTime)
    {     cout<<"On time";}
    else if(arrivalTime > examTime)
    {    cout<<"Late"<<endl;
        late= arrivalTime - examTime;
        hrs= late / 60;
        mint= late % 60;
        if(hrs==0)
            cout<<mint<<" minutes after the start";
        else
        {  cout<<hrs<<":";
            if(mint<10)
                cout<<"0"<<mint;
            else
                cout<<mint;
            cout<<" hours after the start";}}
    else
    {   early=examTime - arrivalTime;
        if(early<=30)
        { cout<<"On time"<<endl;
            cout<<early<<" minutes before the start"; }
        else
        {  cout<<"Early"<<endl;
            hrs=early / 60;
            mint=early % 60;
            if(hrs==0)
                cout<<mint<<" minutes before the start";
            else
            {   cout<<hrs<<":";
                if(mint<10)
                    cout<<"0"<<mint;
                else
                    cout<<mint;
                cout<<" hours before the start";}}}
    return 0;