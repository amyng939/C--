/*
Author: Amy Ng
Course: CSCI-135
Instructor: Genady Maryash
Assignment: E3.1

This program reads an integer and prints whether it is negative, zero, or
positive.
*/

#include <iostream>
using namespace std;

int main()
{
    cout << "Enter an integer: ";
    int num;
    cin >> num;

    if (num < 0)
    {
        cout << "Integer is negative";
    }

    else if (num == 0)
    {
        cout << "Integer is zero";
    }
    
    else
    {
        cout << "Integer is positive";
    }

    return 0;
}