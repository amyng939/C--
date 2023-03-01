/*
Author: Amy Ng
Course: CSCI-135
Instructor: Genady Maryash
Assignment: Lab 3D

This program asks the user to input a start and end date, and outputs the West
basin elevation for all days in between the input dates in reverse order.
*/

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>

using namespace std;

int main()
{
    cout << "Enter earlier date: ";
    string early;
    cin >> early;
    cout << "Enter later date: ";
    string late;
    cin >> late;

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

    string date_arr[1000]; // should probably use 365 instead, one year of data
    double el_arr[1000];
    int i = 0;

    while (fin >> date >> eastSt >> eastEl >> westSt >> westEl)
    {
        fin.ignore(INT_MAX, '\n');

        if (date >= early && date <= late)
        {
            date_arr[i] = date;
            el_arr[i] = westEl;
            i = i + 1;
        }
    }

    for (i = i - 1; i >= 0; i--)
    {
        cout << date_arr[i] << "  " << el_arr[i] << " ft" << endl;
    }

    fin.close();

    return 0;
}