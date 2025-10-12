#include <iostream>
using namespace std;

int main()
{
    cout << boolalpha;

    int score;
    cout << "Enter score: ";
    cin >> score;
    if (score >= 60)
        cout << "Passing" << endl;
    else
        cout << "Failing" << endl;

    cout << "!('A' > 'B') = " << !('A' > 'B') << endl;
    cout << "!(6 <= 7) = " << !(6 <= 7) << endl;
    cout << "(14 >= 5) && ('A' < 'B') = " << ((14 >= 5) && ('A' < 'B')) << endl;
    cout << "(24 >= 35) && ('A' < 'B') = " << ((24 >= 35) && ('A' < 'B')) << endl;

    cout << "(14 >= 5) || ('A' > 'B') = " << ((14 >= 5) || ('A' > 'B')) << endl;
    cout << "(24 >= 35) || ('A' > 'B') = " << ((24 >= 35) || ('A' > 'B')) << endl;
    cout << "('A' <= 'a') || (7 != 7) = " << (('A' <= 'a') || (7 != 7)) << endl;

    return 0;
}
