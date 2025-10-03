#include <iostream>
using namespace std;

int main() {
    double payRate, hours, grossIncome, netIncome;
    double clothes, supplies, remaining, bonds, parentBonds;
    const double TAX_RATE = 0.14;
    const double CLOTHES_PERCENT = 0.10;
    const double SUPPLIES_PERCENT = 0.01;
    const double BONDS_PERCENT = 0.25;

    cin >> payRate >> hours;

    grossIncome = payRate * hours * 5;
    netIncome = grossIncome * (1 - TAX_RATE);

    clothes = netIncome * CLOTHES_PERCENT;
    supplies = netIncome * SUPPLIES_PERCENT;
    remaining = netIncome - clothes - supplies;
    bonds = remaining * BONDS_PERCENT;
    parentBonds = bonds * 0.5;

    cout << "Gross Income: $" << grossIncome << endl;
    cout << "Net Income: $" << netIncome << endl;
    cout << "Money spent on clothes: $" << clothes << endl;
    cout << "Money spent on supplies: $" << supplies << endl;
    cout << "Money spent on savings bonds: $" << bonds << endl;
    cout << "Money parents spend on bonds: $" << parentBonds << endl;

    return 0;
}
