#include <iostream>
using namespace std;

int main()
{
    int score;
    char grade;

    cout << "Enter the test score (0-100): ";
    cin >> score;
    cout << endl;

    switch (score / 10)
    {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            grade = 'F';
            break;
        case 6:
            grade = 'D';
            break;
        case 7:
            grade = 'C';
            break;
        case 8:
            grade = 'B';
            break;
        case 9:
        case 10:
            grade = 'A';
            break;
        default:
            cout << "Invalid test score." << endl;
            return 0;
    }

    cout << "The grade is " << grade << "." << endl;

    return 0;
}
