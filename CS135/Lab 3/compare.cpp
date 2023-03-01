/*
Author: Amy Ng
Course: CSCI-135
Instructor: Genady Maryash
Assignment: Lab 3C

This program asks the user to input two dates and compares the basin elevation
on those dates, outputting "East", "West" or "Equal" depending on which is 
greater.
*/

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>

using namespace std;

int main()
{
    cout << "Enter starting date: ";
    string start;
    cin >> start;
    cout << "Enter ending date: ";
    string end;
    cin >> end;

    ifstream fin("Current_Reservoir_Levels.tsv");
    if (fin.fail())
    {
        cerr << "File cannot be opened for reading" << endl;
        exit(1);
    }

    string junk;
    getline(fin, junk);

    string date;
    double eastSt, eastEl, westSt, westEl;

    while(fin >> date >> eastSt >> eastEl >> westSt >> westEl)
    {
        fin.ignore(INT_MAX, '\n');

        if (date >= start && date <= end)
        {
            string compare;
            if (eastEl > westEl)
            {
                compare = "East";
            }
            else if (westEl > eastEl)
            {
                compare = "West";
            }
            else
            {
                compare = "Equal";
            }

            cout << date << " " << compare << endl;
        }
    }

    fin.close();

    return 0;
}