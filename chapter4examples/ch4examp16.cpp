#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double balance;
    double interestRate;

    cout << fixed << showpoint << setprecision(2);

    cout << "Enter account balance: ";
    cin >> balance;
    cout << endl;

    if (balance > 50000.00)
        interestRate = 0.07;
    else if (balance >= 25000.00)
        interestRate = 0.05;
    else if (balance >= 1000.00)
        interestRate = 0.03;
    else
        interestRate = 0.00;

    cout << "Interest rate: " << interestRate * 100 << "%" << endl;

    return 0;
}
