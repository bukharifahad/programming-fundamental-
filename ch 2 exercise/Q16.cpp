#include <iostream>
#include <cmath>
using namespace std;

int main() {
    const double CARTON_SIZE = 3.78;
    const double COST_PER_LITER = 0.38;
    const double PROFIT_PER_CARTON = 0.27;

    double totalMilk, cost, profit;
    int cartons;

    cin >> totalMilk;

    cartons = round(totalMilk / CARTON_SIZE);
    cost = totalMilk * COST_PER_LITER;
    profit = cartons * PROFIT_PER_CARTON;

    cout << "Cartons needed: " << cartons << endl;
    cout << "Cost of producing milk: $" << cost << endl;
    cout << "Profit: $" << profit << endl;

    return 0;
}
