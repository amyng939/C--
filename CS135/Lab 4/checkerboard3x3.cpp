/*
Author: Amy Ng
Course: CSCI-135
Instructor: Genady Maryash
Assignment: Lab 4G

This program asks the user to input width and height and prints a rectangular
3x3 checkerboard of the requested size using alternating asterisks and spaces.
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
            if ((i / 3) % 2)
            {
                if ((j / 3) % 2)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
            else
            {
                if ((j / 3) % 2)
                {
                    cout << " ";
                }
                else
                {
                    cout << "*";
                }
            }
        }
        cout << endl;
    }
    return 0;
}