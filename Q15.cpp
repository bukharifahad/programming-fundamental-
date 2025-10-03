#include <iostream>
#include <iomanip>
using namespace std;

int main()
 {
    const double PI = 3.141593;  
    double radius, price, area, pricePerSqInch;
    cout << "Enter the radius of the pizza (in inches): ";
    cin >> radius;
    cout << "Enter the price of the pizza: $";
    cin >> price;
    area = PI * radius * radius;
    pricePerSqInch = price / area;
    cout << fixed << setprecision(4);
    cout << "\nThe price of the pizza per square inch is: $" 
         << pricePerSqInch << endl;
    return 0;
}
