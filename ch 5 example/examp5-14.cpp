#include <iostream>
using namespace std;

int main()
{
    int i;  

    
    cout << "Example 1: Loop never executes (i = 10, i <= 9)" << endl;
    cout << "----------------------------------------" << endl;
    for (i = 10; i <= 9; i++)
        cout << i << " ";
    cout << "No output - loop condition was false initially!" << endl << endl;

       cout << "Example 2: Loop never executes (i = 9, i >= 10)" << endl;
    cout << "----------------------------------------" << endl;
    for (i = 9; i >= 10; i--)
        cout << i << " ";
    cout << "No output - loop condition was false initially!" << endl << endl;

    
    cout << "Example 3: Loop executes once (i = 10, i <= 10)" << endl;
    cout << "----------------------------------------" << endl;
    for (i = 10; i <= 10; i++)
        cout << i << " ";
    cout << endl << endl;

       cout << "Example 4: Empty loop with semicolon" << endl;
    cout << "----------------------------------------" << endl;
    for (i = 1; i <= 10; i++);
    cout << "Value of i after loop: " << i << endl << endl;

    
    cout << "Example 5: Powers of 2 up to 100" << endl;
    cout << "----------------------------------------" << endl;
    for (i = 2; i < 100; i = 2 * i)
        cout << i << " ";
    cout << endl << endl;

    
    cout << "Example 6: Infinite loop (not executed)" << endl;
    cout << "----------------------------------------" << endl;
    cout << "// for (i = 1; ; i++)" << endl;
    cout << "//     cout << i << \" \";" << endl;
    cout << "// This would run forever!" << endl;

    return 0;
}