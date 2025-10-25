#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    
    cout << "First 10 Positive Odd Numbers:" << endl;
    cout << "---------------------------" << endl;

    
    cout << "Method 1 (using i += 2):" << endl;
    for (int i = 1; i <= 19; i += 2)
        cout << setw(4) << i;
    cout << endl;

    
    cout << "\nMethod 2 (checking for odd numbers):" << endl;
    int count = 0;
    for (int i = 1; count < 10; i++)
    {
        if (i % 2 != 0)         {
            cout << setw(4) << i;
            count++;
        }
    }
    cout << endl;

     cout << "\nHow the first loop works:" << endl;
    cout << "1. Start with i = 1 (first odd number)" << endl;
    cout << "2. Print i if it's <= 19" << endl;
    cout << "3. Add 2 to i to get next odd number" << endl;
    cout << "4. Repeat until i becomes 21" << endl;

    return 0;
}