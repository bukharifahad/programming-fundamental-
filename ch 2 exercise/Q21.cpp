#include <iostream>
using namespace std;

int main() {
    const double k = 6.67e-8;
    double m1, m2, d, F;

    cin >> m1 >> m2 >> d;

    F = k * (m1 * m2) / (d * d);

    cout << "Force between the bodies: " << F << " dyn" << endl;

    return 0;
}
