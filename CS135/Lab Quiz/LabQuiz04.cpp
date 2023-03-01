/*
Author: Amy Ng
Course: CSCI-135
Instructor: Genady Maryash
Assignment: Lab Quiz 04

This program reads and prints each line of a text file.
*/

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>

using namespace std;

int main()
{
    ifstream fin("data.txt");
    if (fin.fail())
    {
        cerr << "File cannot be opened for reading" << endl;
        exit(1);
    }

    string color, hex;
    while (fin >> color >> hex)
    {
        cout << color << " " << hex << endl;
    }

    fin.close();
    return 0;
}