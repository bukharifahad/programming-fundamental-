#include <iostream>
using namespace std;

int main()
{
    double temperature;

    cout << "Enter the temperature: ";
    cin >> temperature;
    cout << endl;

    if (temperature >= 70)
    {
        if (temperature >= 80)
            cout << "Good day for swimming." << endl;
        else
            cout << "Good day for golfing." << endl;
    }

    return 0;
}
