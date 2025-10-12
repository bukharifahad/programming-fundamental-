#include <iostream>
using namespace std;

int main()
{
    double num1 = 7.9;
    double num2 = 3.3;
    int num3 = 25;
    int num4 = 5;
    int num5 = 3;
    int num6 = 15;
    double num7 = 7.8;

    cout << "static_cast<int>(" << num1 << ") = " << static_cast<int>(num1) << endl;
    cout << "static_cast<int>(" << num2 << ") = " << static_cast<int>(num2) << endl;
    cout << "static_cast<double>(" << num3 << ") = " << static_cast<double>(num3) << endl;
    cout << "static_cast<double>(" << num4 << " + " << num5 << ") = " << static_cast<double>(num4 + num5) << endl;
    cout << "static_cast<double>(" << num6 << ") / 2 = " << static_cast<double>(num6) / 2 << endl;
    cout << "static_cast<double>(" << num6 << " / 2) = " << static_cast<double>(num6 / 2) << endl;
    cout << "static_cast<int>(" << num7 << " + static_cast<double>(" << num6 << ") / 2) = " << static_cast<int>(num7 + static_cast<double>(num6) / 2) << endl;
    cout << "static_cast<int>(" << num7 << " + static_cast<double>(" << num6 << " / 2)) = " << static_cast<int>(num7 + static_cast<double>(num6 / 2)) << endl;

    return 0;
}
