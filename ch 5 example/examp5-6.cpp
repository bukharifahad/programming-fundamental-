#include <iostream>
#include <cstdlib>
#include <ctime> 
using namespace std;

int main()
{
 
    srand(static_cast<unsigned int>(time(nullptr)));

 
    int num1, num2;
    char repeat;

    do {
 
        num1 = rand() % 100 + 1;
        num2 = rand() % 100 + 1;

 
        cout << "First random number: " << num1 << endl;
        cout << "Second random number: " << num2 << endl;
        cout << "Sum: " << num1 + num2 << endl;

 
        do {
            cout << "\nWould you like to try again? (y/n): ";
            cin >> repeat;
            cin.ignore(100, '\n');  
        } while (repeat != 'y' && repeat != 'Y' && 
                repeat != 'n' && repeat != 'N');

        cout << endl;

    } while (repeat == 'y' || repeat == 'Y');

    return 0;
}