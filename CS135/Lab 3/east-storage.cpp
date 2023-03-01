/*
Author: Amy Ng
Course: CSCI-135
Instructor: Genady Maryash
Assignment: Lab 3A

This program asks the user to input a date and prints out the East basin
storage on that day.
*/

#include <iostream>
#include <fstream> // to read and write from/to files.
#include <cstdlib> // to allow function exit
#include <climits>

using namespace std;

int  main()
{
    // object type ifstream, input file stream, named fin
    ifstream fin("Current_Reservoir_Levels.tsv");
    if (fin.fail())
    {
        cerr << "File cannot be opened for reading." << endl;
        exit(1);
    }

    string junk;
    getline(fin, junk); // read one line from the file

    cout << "Enter date: ";
    string date_input;
    cin >> date_input;

    string date, eastSt, eastE1, westSt, westE1;
    while (fin >> date >> eastSt >> eastE1 >> westSt >> westE1)
        // reads the file line-by-line
        // extracting 5 values on each iteration
    {
        fin.ignore(INT_MAX, '\n'); // skips to end of line, ignoring the
                                    // remaining columns, has to be ''

        if (date == date_input) // finds the one line to print
        {
            cout << "East basin storage: " << eastSt << " billion gallons";
        }
    }

    fin.close(); // closes the stream
    
    return 0;
}