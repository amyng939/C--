/*
Author: Amy Ng
Course: CSCI-135
Instructor: Genady Maryash
Assignment: Lab 4D

This program asks the user to input side length and prints the bottom-left half
of a square that length.
*/

#include <iostream>
using namespace std;

int main()
{
    cout << "Enter side length: ";
    int length;
    cin >> length;

    cout << "\nShape: " << endl;

    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << "*";
        }

        cout << endl;
    }
    return 0;
}