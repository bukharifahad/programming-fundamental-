#include <iostream>
using namespace std;

int main()
{
    int num, temp, sum = 0;

    cout << "Welcome!" << endl;
    cout << "This program checks whether a positive integer is divisible by 3 or 9." << endl;
    cout << "\nEnter a positive integer: ";
    cin >> num;
    cout << endl;

    
    temp = num;

    
    do
    {
        sum = sum + num % 10; 
        num = num / 10;         }
    while (num > 0);

    cout << "The sum of the digits is: " << sum << endl;

    
    if (sum % 9 == 0)
    {
        cout << temp << " is divisible by both 3 and 9." << endl;
    }
    else if (sum % 3 == 0)
    {
        cout << temp << " is divisible by 3, but not by 9." << endl;
    }
    else
    {
        cout << temp << " is not divisible by 3 or 9." << endl;
    }

    cout << "\nThank you for using this program!" << endl;

    return 0;
}