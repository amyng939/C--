/*
Author: Amy Ng
Course: CSCI-135
Instructor: Genady Maryash
Assignment: Lab 4E

This program asks the user to input side length and prints the top-right half
of a square that length.
*/

#include <iostream>
using namespace std;

int main()
{
    cout << "Input side length: ";
    int length;
    cin >> length;

    cout << "\nShape: " << endl;

    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        
        for (int k = i; k < length; k++)
        {
            cout << "*";
        }

        cout << endl;
    }
    return 0;
}