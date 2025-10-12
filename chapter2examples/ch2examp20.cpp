#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Original value = " << num << endl;
    cout << "Prefix increment (++num) = " << ++num << endl;
    cout << "After prefix increment, num = " << num << endl;
    cout << "Postfix increment (num++) = " << num++ << endl;
    cout << "After postfix increment, num = " << num << endl;
    return 0;
}
