// Author: Amy Ng
// Course: CSCI-135
// Instructor: Genady Maryash
// Assignment: Lab Quiz 03

// This program initializes an array of 10 integers, uses a for loop to
// initialize the values from 1 to 10, then prints each number on a separate
// line.

#include <iostream>
using namespace std;

int main()
{
    int array[10];

    for (int i = 0; i < 10; i++)
    {
        array[i] = i + 1;
    }

    for (int i = 0; i < 10; i++)
    {
        cout << array[i] << endl;
    }
    
    return 0;
}