#include <iostream>
using namespace std;

int main() {
    int totalSeconds, hours, minutes, seconds;
    cin >> totalSeconds;
    hours = totalSeconds / 3600;
    totalSeconds %= 3600;
    minutes = totalSeconds / 60;
    seconds = totalSeconds % 60;
    cout << hours << ":" << minutes << ":" << seconds;
    return 0;
}
