/*
Author: Amy Ng
Course: CSCI-135
Instructor: Genady Maryash
Assignment: Lab2C

This program creates an array of 10 integers and provides the user with an
interface to edit any of its elements.
*/

#include <iostream>
using namespace std;

int main()
{
    int myData[10];
    int i;

    for (i = 0; i < 10; i++)
    {
        myData[i] = 1;
    }

    do
    {
        cout << endl;
        for (i = 0; i < 10; i++)
        {
            cout << myData[i] << " ";
        }

        cout << endl;
        cout << "\nInput index: ";
        cin >> i;
        cout << "Input value: ";
        int v;
        cin >> v;

        if (i >= 0 && i < 10)
        {
            myData[i] = v;
        }
        else
        {
            cout << "\nIndex out of range. Exit.";
            return 0;
        }
    } while (i >= 0 && i < 10);
}
