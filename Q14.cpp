#include <iostream>
using namespace std;

int main() {
    double sizeGB, manufacturerBytes, actualGB;
    cin >> sizeGB;
    manufacturerBytes = sizeGB * 1000000000.0;
    actualGB = manufacturerBytes / (1024.0 * 1024.0 * 1024.0);
    cout << "Specified Size: " << sizeGB << " GB" << endl;
    cout << "Actual Size: " << actualGB << " GB" << endl;
    return 0;
}
