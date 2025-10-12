#include <iostream>
using namespace std;

int main() {
    int score;
    char grade;

    cout << "Enter the score: ";
    cin >> score;

    if (score >= 60)
        grade = 'P';
    else
        grade = 'F';

    cout << "Grade: " << grade << endl;

    return 0;
}
