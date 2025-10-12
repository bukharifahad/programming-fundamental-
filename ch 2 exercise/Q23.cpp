#include <iostream>
using namespace std;

int main() {
    const double SERVICE_CHARGE = 0.015;
    int shares;
    double purchasePrice, sellingPrice;
    double amountInvested, purchaseCharge, sellingCharge, totalCharges;
    double amountReceived, net;

    cin >> shares >> purchasePrice >> sellingPrice;

    amountInvested = shares * purchasePrice;
    purchaseCharge = amountInvested * SERVICE_CHARGE;
    amountReceived = shares * sellingPrice;
    sellingCharge = amountReceived * SERVICE_CHARGE;
    totalCharges = purchaseCharge + sellingCharge;
    net = amountReceived - sellingCharge - amountInvested - purchaseCharge;

    cout << "Amount Invested: $" << amountInvested << endl;
    cout << "Total Service Charges: $" << totalCharges << endl;
    cout << "Amount Received After Selling: $" << amountReceived - sellingCharge << endl;
    cout << "Net Gain/Loss: $" << net << endl;

    return 0;
}
