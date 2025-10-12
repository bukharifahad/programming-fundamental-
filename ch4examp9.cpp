#include <iostream>
using namespace std;

int main()
{
    int score;
    cout << "Enter score: ";
    cin >> score;

    if (score >= 60)
        cout << "Passing" << endl;
    else
        cout << "Failing" << endl;

    return 0;
}
