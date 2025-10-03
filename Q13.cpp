#include <iostream>
using namespace std;

int main() {
    double originalPrice, markupPercent, taxRate, sellingPrice, salesTax, finalPrice;
    cin >> originalPrice >> markupPercent >> taxRate;
    sellingPrice = originalPrice + (originalPrice * markupPercent / 100.0);
    salesTax = sellingPrice * taxRate / 100.0;
    finalPrice = sellingPrice + salesTax;
    cout << "Original Price: " << originalPrice << endl;
    cout << "Markup Percentage: " << markupPercent << "%" << endl;
    cout << "Selling Price: " << sellingPrice << endl;
    cout << "Sales Tax Rate: " << taxRate << "%" << endl;
    cout << "Sales Tax: " << salesTax << endl;
    cout << "Final Price: " << finalPrice << endl;
    return 0;
}
