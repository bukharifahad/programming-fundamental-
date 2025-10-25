
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int i, j;

    cout << "Welcome!" << endl;
    cout << "This program prints a multiplication table for numbers 1 through 5." << endl;
    cout << "Each line shows multiples of that number up to 10.\n" << endl;

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 10; j++)
        {
            cout << setw(4) << i * j;
        }
        cout << endl;  }

    cout << "\nThank you for using this program!" << endl;

    return 0;
}