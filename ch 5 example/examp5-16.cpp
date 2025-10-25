#include <iostream>
using namespace std;

int main()
{
    int nthFibonacci;   
       int previous1 = 0;  
       int previous2 = 1;  
    int current;        
    int counter;           cout << "Enter the position (n) of the Fibonacci number to find: ";
    cin >> nthFibonacci;

    if (nthFibonacci == 1)
        current = previous1;
    else if (nthFibonacci == 2)
        current = previous2;
    else
    {
        for (counter = 3; counter <= nthFibonacci; counter++)
        {
            current = previous1 + previous2;  
            previous1 = previous2;            
            previous2 = current;              
        }
    }

    cout << "The " << nthFibonacci << "th Fibonacci number is: " << current << endl;

    return 0;
}