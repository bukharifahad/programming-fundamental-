
#include <iostream>
using namespace std;

int main()
{
    int i = 1;
    int newNum, sum = 0;
    double average;

    cout << "This program will read 5 numbers and calculate their sum and average.\n";

    while (i <= 5)
    {
        cout << "Enter number " << i << ": ";
        cin >> newNum;
        sum += newNum;
        i++;
    }

    average = static_cast<double>(sum) / 5.0;

    cout << "\nThe sum of the 5 numbers is: " << sum << endl;
    cout << "The average is: " << average << endl;

    cout << "\nThank you for using this program!" << endl;

    return 0;
}