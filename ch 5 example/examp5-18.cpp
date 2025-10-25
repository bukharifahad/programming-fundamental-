
#include <iostream>
using namespace std;

int main()
{
    int i = 0;

    cout << "This program prints numbers starting from 0 and increases by 5 each time,\n";
    cout << "stopping when the number becomes greater than 20.\n\n";

    do
    {
        cout << i << " "; 
        i = i + 5;        
    }
    while (i <= 20);

    cout << "\n\nLoop finished! The final value of i is " << i << "." << endl;

    return 0;
}