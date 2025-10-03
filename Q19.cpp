
#include <iostream>
using namespace std;

int main() {
    int quarters, dimes, nickels, totalPennies;
    cin >> quarters >> dimes >> nickels;
    totalPennies = quarters * 25 + dimes * 10 + nickels * 5;
    cout << "Total in pennies: " << totalPennies << endl;
    return 0;
}
