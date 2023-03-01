/*
Author: Amy Ng
Course: CSCI-135
Instructor: Genady Maryash
Assignment: Lab2A

This program asks the user to input an integer in the range 0 < n < 100. If the
number is out of range, the program will ask to re-enter until a valid number
is input and will output the integer squared.
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    cout << "Please enter an integer: ";
    int num;
    cin >> num;

    while (num <= 0 || num >= 100)
    {
        cout << "Please re-enter: ";
        cin >> num;
    }

    cout << "\nNumber squared is " << pow(num, 2);
    
    return 0;
}