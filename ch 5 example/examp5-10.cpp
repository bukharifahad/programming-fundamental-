#include <iostream>
using namespace std;

int main()
{
    int i;

    
    cout << "Example 1: With braces { }" << endl;
    cout << "------------------------" << endl;
    for (i = 1; i <= 5; i++)
    {
        cout << "Hello!" << endl;
        cout << "*" << endl;
    }

    
    cout << "\nExample 2: Without braces" << endl;
    cout << "------------------------" << endl;
    
    
    for (i = 1; i <= 5; i++)
        cout << "Hello!" << endl;
    cout << "*" << endl;

    
    cout << "\nExplanation:" << endl;
    cout << "1. In Example 1, both statements are inside braces { }" << endl;
    cout << "   So both 'Hello!' and '*' print 5 times" << endl;
    cout << "2. In Example 2, only the first statement is controlled by the loop" << endl;
    cout << "   So 'Hello!' prints 5 times, but '*' prints only once at the end" << endl;

    return 0;
}