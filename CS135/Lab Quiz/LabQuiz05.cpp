/*
Author: Amy Ng
Course: CSCI-135
Instructor: Genady Maryash
Assignment: Lab Quiz 05

This program prints out 6 rows and 5 columns of "+".
*/

#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << "+";
        }
        cout << endl;
    }
    return 0;
}