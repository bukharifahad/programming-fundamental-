
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

    int num, sum, counter = 0;

    
    infile >> num;

    
    while (infile)
    {
        sum = 0; 

        
        while (num != -999 && infile)
        {
            sum = sum + num;
            infile >> num;
        }

        counter++; 
        cout << "Line " << counter << ": Sum = " << sum << endl;

       
        infile >> num;
    }

    infile.close();
    cout << "\nFinished reading all lines successfully!" << endl;

    return 0;
}