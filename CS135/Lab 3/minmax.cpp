/*
Author: Amy Ng
Course: CSCI-135
Instructor: Genady Maryash
Assignment: Lab 3B

This program finds the minimum and maximum storage in East basin in 2018.
*/

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits> // allows INT_MAX and INT_MIN

using namespace std;

int main()
{
    ifstream fin("Current_Reservoir_Levels.tsv");
    if (fin.fail())
    {
        cerr << "File cannot be opened for reading." << endl;
        exit(1);
    }

    string junk;
    getline(fin, junk);

    string date;
    double eastSt, eastE1, westSt, westE1;
    double min = INT_MAX;
    double max = INT_MIN;
    while(fin >> date >> eastSt >> eastE1 >> westSt >> westE1)
    {
        fin.ignore(INT_MAX, '\n');

        if (eastSt < min)
        {
            min = eastSt;
        }

        if (eastSt > max)
        {
            max = eastSt;
        }
    }

    cout << "minimum storage in East basin: " << min << " billion gallons";
    cout << endl;
    cout << "MAXimum storage in East basin: " << max << " billion gallons";

    fin.close();

    return 0;
}