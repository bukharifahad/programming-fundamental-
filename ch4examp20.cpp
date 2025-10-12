#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    char gender;
    int age;
    double policyRate;

    cout << "Enter gender (M/F): ";
    cin >> gender;
    cout << "Enter age: ";
    cin >> age;
    cout << endl;

    if (gender == 'M')
    {
        if (age < 21)
            policyRate = 0.05;
        else
            policyRate = 0.35;
    }
    else if (gender == 'F')
    {
        if (age < 21)
            policyRate = 0.04;
        else
            policyRate = 0.30;
    }

    cout << fixed << showpoint << setprecision(2);
    cout << "Policy rate: " << policyRate * 100 << "%" << endl;

    return 0;
}
