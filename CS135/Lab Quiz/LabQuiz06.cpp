/*
Author: Amy Ng
Course: CSCI-135
Instructor: Genady Maryash
Assignment: Lab Quiz 06

This program defines a function max3 that takes three integers a, b, c and
returns the maximum of the three.
*/

#include <iostream>
using namespace std;

int max3(int a, int b, int c)
{
    if (a > b && a > c)
    {
        return a;
    }
    else if (b > a && b > c)
    {
        return b;
    }
    else
    {
        return c;
    }
}

int main()
{
    cout << "Enter three integers separated by a space: ";
    int a, b, c;
    cin >> a >> b >> c;

    cout << max3(a, b, c) << endl;

    return 0;
}