#include <iostream>
using namespace std;

int main() {
    int h, x, y;
    cin >> h >> x >> y;

    bool inside = false, border = false;

   
    if ((x > 0 && x < 3 * h && y > 0 && y < h) ||
        (x > h && x < 2 * h && y > h && y < 4 * h))
        inside = true;

    
    if (((x >= 0 && x <= 3 * h) && (y == 0 || y == h)) ||
        ((y >= 0 && y <= h) && (x == 0 || x == 3 * h)))
        border = true;

    if (((x >= h && x <= 2 * h) && (y == h || y == 4 * h)) ||
        ((y >= h && y <= 4 * h) && (x == h || x == 2 * h)))
        border = true;

    if (y == h && x >= h && x <= 2 * h)
        border = true;

    if (border)
        cout << "border";
    else if (inside)
        cout << "inside";
    else
        cout << "outside";

    return 0;
}
