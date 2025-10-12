#include <iostream>
using namespace std;

int main() {
    double hours;
    double rate;
    double wages;

    cout << "Enter hours worked: ";
    cin >> hours;

    cout << "Enter hourly rate: ";
    cin >> rate;

    if (hours > 40.0)
        wages = 40.0 * rate + 1.5 * rate * (hours - 40.0);
    else
        wages = hours * rate;

    cout << "Wages: $" << wages << endl;

    return 0;
}
