/*
Author: Amy Ng
Course: CSCI-135
Instructor: Genady Maryash
Assignment: Lab2B

This program asks the user for two integer inputs and prints out all the
integers in the range of the inputs, including the lower limit but not the
upper limit.
*/

#include <iostream>
using namespace std;

int main()
{
    cout << "Please enter L: ";
    int L;
    cin >> L;
    cout << "Please enter U: ";
    int U;
    cin >> U;

    for (int i = L; i < U; i++)
    {
        cout << i << " ";
    }
    
    return 0;
}