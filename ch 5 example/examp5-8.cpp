#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;


const string INPUT_FILE = "Ch5_stData.txt";
const string OUTPUT_FILE = "Ch5_stData.out";


const int MAX_SCORE = 100;
const int MIN_SCORE = 0;


char calculateGrade(double score) {
    if (score < MIN_SCORE || score > MAX_SCORE) return 'X';
    
    switch (static_cast<int>(score) / 10) {
        case 10:
        case 9: return 'A';
        case 8: return 'B';
        case 7: return 'C';
        case 6: return 'D';
        default: return 'F';
    }
}

int main() {

    string firstName, lastName;
    double testScore, sum = 0.0;
    int count = 0;
    ifstream inFile;
    ofstream outFile;


    inFile.open(INPUT_FILE);
    if (!inFile) {
        cerr << "Error: Cannot open input file '" << INPUT_FILE << "'" << endl;
        return 1;
    }

  outFile.open(OUTPUT_FILE);
    if (!outFile) {
        cerr << "Error: Cannot create output file '" << OUTPUT_FILE << "'" << endl;
        inFile.close();
        return 1;
    }

   outFile << fixed << showpoint << setprecision(2);

    outFile << left << setw(12) << "First Name" 
            << setw(12) << "Last Name"
            << right << setw(8) << "Score"
            << setw(6) << "Grade" << endl;
    outFile << string(38, '-') << endl;

    while (inFile >> firstName >> lastName >> testScore) {
       
        if (testScore < MIN_SCORE || testScore > MAX_SCORE) {
            cerr << "Warning: Invalid score " << testScore 
                 << " for " << firstName << " " << lastName << endl;
            continue;
        }

       
        sum += testScore;
        count++;

        
        char grade = calculateGrade(testScore);
        outFile << left << setw(12) << firstName
                << setw(12) << lastName
                << right << setw(8) << testScore
                << setw(6) << grade << endl;
    }

    
    outFile << "\n" << string(38, '=') << endl;
    if (count > 0) {
        double average = sum / count;
        outFile << "Number of students: " << count << endl;
        outFile << "Class Average: " << average << endl;
    } else {
        outFile << "No valid data found." << endl;
    }

    
    inFile.close();
    outFile.close();

    cout << "Processing complete. Results written to '" << OUTPUT_FILE << "'" << endl;
    return 0;
}