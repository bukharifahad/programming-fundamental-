#include <iostream>
using namespace std;

int main()
{
    
    int i;

    
    cout << "First 10 nonnegative integers:" << endl;

    
    for (i = 0; i < 10; i++)
    {
        cout << i << " ";
    }
    cout << endl;

    
    cout << "\nExplanation:" << endl;
    cout << "1. i started at 0" << endl;
    cout << "2. While i was less than 10:" << endl;
    cout << "   - Printed the value of i" << endl;
    cout << "   - Incremented i by 1" << endl;
    cout << "3. Loop ended when i became 10" << endl;

    return 0;
}