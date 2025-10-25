
#include <iostream>
using namespace std;

int main()
{
    int i, j;

    cout << "Welcome!" << endl;
    cout << "This program prints a pattern of stars (*) in two different ways." << endl;

    cout << "\nPattern 1: Increasing Stars\n";
    for (i = 1; i <= 5; i++) 
    {
        for (j = 1; j <= i; j++) 
        {
            cout << "*";
        }
        cout << endl; 
    }

    cout << "\nPattern 2: Decreasing Stars\n";
    for (i = 5; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    cout << "\nThank you for viewing the patterns!" << endl;

    return 0;
}