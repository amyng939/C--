/*
Author: Amy Ng
Course: CSCI-135
Instructor: Genady Maryash
Assignment: Lab 4A

This program asks the user to input width and height and prints a solid
rectangular box of the requested size using asterisks.
*/

#include <iostream>
using namespace std;

int main()
{
    cout << "Input width: ";
    int width;
    cin >> width;
    cout << "Input height: ";
    int height;
    cin >> height;

    cout << "\nShape: " << endl;

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            cout << "*";
        }

        cout << endl;
    }
    return 0;
}