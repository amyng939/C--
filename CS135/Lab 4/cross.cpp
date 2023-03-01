/*
Author: Amy Ng
Course: CSCI-135
Instructor: Genady Maryash
Assignment: Lab 4C

This program asks the user to input size and prints a diagonal cross of that
dimension.
*/

#include <iostream>
using namespace std;

int main()
{
    cout << "Input size: ";
    int size;
    cin >> size;

    cout << "\nShape: " << endl;

    int end_counter = size;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (j == i || j == end_counter - 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }

        cout << endl;
        end_counter--;
    }
    return 0;
}