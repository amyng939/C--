/*
Author: Amy Ng
Course: CSCI-135
Instructor: Genady Maryash
Assignment: Lab Quiz 02

This program asks user for two number inputs and outputs the bigger one.
*/

#include <iostream>
using namespace std;

int main()
{
    cout << "Enter a number: ";
    int one;
    cin >> one;
    cout << "Enter a second number: ";
    int two;
    cin >> two;

    if (one > two)
    {
        cout << one;
    }
    else
    {
        cout << two;
    }
    return 0;
}