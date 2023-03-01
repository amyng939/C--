/*
Author: Amy Ng
Course: CSCI-135
Instructor: Genady Maryash
Assignment: Lab 4B

This program asks the user to input width and height and prints a rectangular
checkerboard of the requested size using alternating asterisks and spaces.
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
        for (int j = 0; j < width; j += 2)
        {
            if (i % 2 == 0)
            {
                if (width % 2 != 0)
                {
                    if (j < width - 1)
                    {
                        cout << "* ";
                    }
                    else
                    {
                        cout << "*";
                    }
                }

                else
                {
                    cout << "* ";
                }
            }

            else
            {
                if (width % 2 != 0)
                {
                    if (j < width - 1)
                    {
                        cout << " *";
                    }
                    else
                    {
                        cout << " ";
                    }
                }

                else
                {
                    cout << " *";
                }
            }
        }

        cout << endl;
    }
    return 0;
}