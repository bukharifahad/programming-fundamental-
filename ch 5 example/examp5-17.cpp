#include <iostream>
using namespace std;

int main()
{
    int counter;     int sum = 0;  
    int N;        

    cout << "Welcome!" << endl;
    cout << "This program calculates the sum of the first N positive integers." << endl;

    cout << "\nEnter a positive number (N): ";
    cin >> N;

    if (N <= 0)
    {
        cout << "Please enter a number greater than 0." << endl;
        return 0;
    }

    for (counter = 1; counter <= N; counter++)
    {
        sum += counter;
    }

    cout << "\nThe sum of the first " << N << " positive integers is: " << sum << endl;
    cout << "Thank you for using this program!" << endl;

    return 0;
}