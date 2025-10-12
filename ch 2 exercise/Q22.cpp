#include <iostream>
#include <cmath>
using namespace std;

int main() {
    const double METRIC_TON = 2205.0;
    double bagCapacity;
    int bags;

    cin >> bagCapacity;

    bags = ceil(METRIC_TON / bagCapacity);

    cout << "Number of bags needed: " << bags << endl;

    return 0;
}
