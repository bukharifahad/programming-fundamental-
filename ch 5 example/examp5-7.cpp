#include <iostream>
using namespace std;

int main()
{
    
    int sum = 0;
    int num;

    
    cout << "Enter numbers to sum (Ctrl+Z to end on Windows): ";
    
    
    cin >> num;

    
    while (cin)
    {
        sum += num;         
        cin >> num;            }

    cout << "Sum = " << sum << endl;

    return 0;
}