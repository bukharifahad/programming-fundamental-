#include <iostream>
#include <string>
using namespace std;
int main()
{
    int count, temp;
    double length, width, area;
    char ch;
    string name;
    count = 1;
    count = count + 1;
    cin >> length >> width;
    area = length * width;
    cin >> name;
    length = length + 2;
    width = 2 * length + 5 * width;
    area = length * width;
    cin >> ch;
    temp = count + static_cast<int>(ch);
    cout << "count=" << count << endl;
    cout << "length=" << length << endl;
    cout << "width=" << width << endl;
    cout << "area=" << area << endl;
    cout << "name=" << name << endl;
    cout << "ch=" << ch << endl;
    cout << "temp=" << temp << endl;
    return 0;
}
