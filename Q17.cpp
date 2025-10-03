#include <iostream>
#include <cmath>
using namespace std;

int main() {
    const double CARTON_SIZE = 3.78;
    double totalMilk, costPerLiter, profitPerCarton, cost, profit;
    int cartons;

    cin >> totalMilk >> costPerLiter >> profitPerCarton;

    cartons = round(totalMilk / CARTON_SIZE);
    cost = totalMilk * costPerLiter;
    profit = cartons * profitPerCarton;

    cout << "Cartons needed: " << cartons << endl;
    cout << "Cost of producing milk: $" << cost << endl;
    cout << "Profit: $" << profit << endl;

    return 0;
}
