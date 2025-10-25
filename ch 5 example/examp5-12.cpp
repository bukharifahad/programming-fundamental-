#include <iostream>
#include <iomanip> 
using namespace std;

int main()
{
       cout << "Countdown Example:" << endl;
    cout << "-----------------" << endl;
    
       cout << "Method 1 - Simple countdown:" << endl;
    for (int i = 10; i >= 1; i--)
        cout << setw(3) << i;
    cout << endl << "Blast off!" << endl;

    
    cout << "\nMethod 2 - Countdown with steps:" << endl;
    for (int i = 10; i >= 1; i--)
    {
        cout << "T minus " << setw(2) << i << " seconds" << endl;
    }
    cout << "Launch!" << endl;

        cout << "\nHow the loop works:" << endl;
    cout << "1. Initialize: i starts at 10" << endl;
    cout << "2. Condition: continue while i >= 1" << endl;
    cout << "3. Update: decrease i by 1 each time (i--)" << endl;
    cout << "4. Loop ends when i becomes 0" << endl;

    return 0;
}