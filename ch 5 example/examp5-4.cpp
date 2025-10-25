#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

const string SENTINEL = "-1";

int main()
{
   string name;
    int numOfVolunteers;
    int numOfBoxesSold;
    int totalNumOfBoxesSold;
    double costOfOneBox;

    cout << fixed << showpoint << setprecision(2);

 cout << "Enter each volunteer's name and the number of boxes" << endl
         << "sold by each volunteer (enter -1 to finish):" << endl;


    totalNumOfBoxesSold = 0;
    numOfVolunteers = 0;

  cin >> name;


    while (name != SENTINEL)
    {
        cin >> numOfBoxesSold;
        totalNumOfBoxesSold += numOfBoxesSold;
        numOfVolunteers++;
        cin >> name;
    }
    cout << endl;


    cout << "Total number of boxes sold: " << totalNumOfBoxesSold << endl;
    
    cout << "Enter the cost of one box: $";
    cin >> costOfOneBox;
    cout << endl;

    cout << "Total money made by selling cookies: $" 
         << totalNumOfBoxesSold * costOfOneBox << endl;


    if (numOfVolunteers != 0)
        cout << "Average number of boxes sold per volunteer: " 
             << totalNumOfBoxesSold / numOfVolunteers << endl;
    else
        cout << "No input." << endl;

    return 0;
}