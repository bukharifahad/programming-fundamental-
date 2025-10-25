#include <iostream>
using namespace std;

int main()
{
    int i;

    cout << "Example (a): WHILE loop demonstration\n";
    i = 11;

    cout << "Starting value of i = " << i << endl;
    cout << "While loop starts...\n";

    while (i <= 10)
    {
        cout << i << " ";
        i = i + 5;
    }

    cout << "\nResult: Nothing is printed because the condition (i <= 10) "
         << "is false right from the start.\n\n";

    
    cout << "Example (b): DO-WHILE loop demonstration\n";
    i = 11;

    cout << "Starting value of i = " << i << endl;
    cout << "Do-While loop starts...\n";

    do
    {
        cout << i << " ";
        i = i + 5;
    }
    while (i <= 10);

    cout << "\nResult: The number 11 is printed once, and i becomes " << i
         << " after the loop.\n\n";

       cout << "Now let's see how a DO-WHILE loop is used for input validation.\n";

    int score;

    do
    {
        cout << "Enter a score between 0 and 50: ";
        cin >> score;

        if (score < 0 || score > 50)
        {
            cout << "Invalid input. Please try again.\n\n";
        }

    } while (score < 0 || score > 50);

    cout << "\nValid score entered: " << score << endl;
    cout << "Thank you for entering a valid score!" << endl;

    return 0;
}