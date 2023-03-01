/*
Author: Amy Ng
Course: CSCI-135
Instructor: Genady Maryash
Assignment: Lab1A

This program prints out the smaller of the two integers inputted by the user.
*/

#include <iostream>
using namespace std;

int main() {
    int first;
    int sec;

    cout << "Enter the first number: ";
    cin >> first;
    cout << "Enter the second number: ";
    cin >> sec;
    cout << endl;

    if (first < sec) {
        cout << "The smaller of the two is " << first;
    }
    else {
        cout << "The smaller of the two is " << sec;
    }
    return 0;
}