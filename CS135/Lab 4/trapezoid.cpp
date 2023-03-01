/*
Author: Amy Ng
Course: CSCI-135
Instructor: Genady Maryash
Assignment: Lab 4F

This program prints an upside-down trapezoid of given width and height.
However, if the input height is impossibly large for the given width, the
program will report "Impossible shape!".
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

    if (-2 * (height - 1) + width <= 0)
    {
        cout << "\nImpossible shape!";
        return 0;
    }

    cout << "\nShape: " << endl;

    int stars = width;
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }

        for (int k = 0; k < stars; k++)
        {
            cout << "*";
        }

        cout << endl;
        stars -= 2;
    } 
    return 0;
}