
#include <iostream>
#include <fstream>  
#include <string>   
using namespace std;

int main()
{
    ifstream infile;
    infile.open("Exp_5_25.txt");

    if (!infile)
    {
        cout << "Error: Could not open the file 'Exp_5_25.txt'." << endl;
        return 1;
    }

    int ID;      
    string name;  
    int num;      
    int sum;      
    char ch;     

    
    infile >> ID;

    
    while (infile)
    {
        infile.get(ch);        
        getline(infile, name); 

        sum = 0;               
       infile >> num;         

        
        while (num != -999)
        {
            sum = sum + num;
            infile >> num;
        }
        cout << "Candidate: " << name
             << " | Total Votes: " << sum << endl;

        infile >> ID;
    }

    infile.close();
    cout << "\nAll candidate data processed successfully!" << endl;

    return 0;
}