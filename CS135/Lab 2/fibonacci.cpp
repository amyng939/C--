/*
Author: Amy Ng
Course: CSCI-135
Instructor: Genady Maryash
Assignment: Lab2D

This program uses an array of ints to compute and print all Fibonacci numbers
from F(0) to F(59).
*/

#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 60;
    int fib[SIZE];
    
    fib[0] = 0;
    cout << fib[0] << endl;
    fib[1] = 1;
    cout << fib[1] << endl;

    for (int i = 2; i < 60; i++)
    {
        fib[i] = fib[i-1] + fib[i-2];
        cout << fib[i] << endl;
    }

    return 0;
}
