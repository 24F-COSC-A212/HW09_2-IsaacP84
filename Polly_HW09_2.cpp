// Filename: Polly_HW09_2.cpp
// Description: Displaying text from a file.
// Author: Isaac J Polly Jr
// Date Modified: 10/17/24
#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

int main()
{
    ifstream inFS;

    char inName[200];

    string input_buffer;

    int line_count = 0;

    cout << "Enter the input file name: ";
    cin >> inName;

    cout << endl;

    inFS.open(inName);

    if (!inFS.is_open())
    {
        cout << inName << ": Error occurred when opening file." << endl;
        return 1;
    }

    while (!inFS.eof())
    {
        getline(inFS, input_buffer, '\n');
        cout << setw(4) << right << line_count << ": ";
        cout << left << input_buffer;

        line_count++;
        cout << endl;
    }

    cout << endl;
    cout << "Finishing..." << endl;
    inFS.close();
    cout << "Finished." << endl;
    return 0;
}