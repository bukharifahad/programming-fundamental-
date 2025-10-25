
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream infile;
    infile.open("Exp_5_23.txt");

    if (!infile)
    {
        cout << "Error: Could not open the file 'Exp_5_23.txt'." << endl;
        return 1;
    }

    int counter = 0;  
    int num;          
    int sum;          

    cout << "Reading data from file and calculating sums...\n" << endl;

    while (counter < 5) 
    {
        sum = 0;        
        infile >> num;     
        while (num != -999)
        {
            sum = sum + num;
            infile >> num; 
        }

        cout << "Line " << counter + 1 << ": Sum = " << sum << endl;
        counter++;
    }

    infile.close();
    cout << "\nAll lines processed successfully!" << endl;

    return 0;
}