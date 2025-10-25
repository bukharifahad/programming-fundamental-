#include <iostream>
using namespace std;

int main()
{
    
    cout << "Example 1: Empty for loop with semicolon" << endl;
    cout << "---------------------------------------" << endl;
    int i;
    for (i = 0; i < 5; i++);  
    cout << "*" << endl;      
    
    
    cout << "\nExample 2: Loop condition initially false" << endl;
    cout << "-------------------------------------" << endl;
    for (i = 5; i < 5; i++)
        cout << "This will never print!" << endl;
    
    
    cout << "\nExample 3: Infinite loop (shown but not executed)" << endl;
    cout << "--------------------------------------------" << endl;
    cout << "// for(;;)" << endl;
    cout << "//     cout << \"Hello\" << endl;" << endl;
    
       cout << "\nExample 4: Double as counter (not recommended)" << endl;
    cout << "-----------------------------------------" << endl;
    double d;
    for (d = 0.0; d < 3.0; d += 0.5)
        cout << "d = " << d << endl;
    
        cout << "\nKey Points About For Loops:" << endl;
    cout << "1. A semicolon after for() creates an empty loop" << endl;
    cout << "2. If initial condition is false, loop never executes" << endl;
    cout << "3. Infinite loops can be created with for(;;)" << endl;
    cout << "4. Avoid using double variables as counters" << endl;
    cout << "5. The three parts of for(init; condition; update) are all optional" << endl;

    return 0;
}