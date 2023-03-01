/*
Author: Amy Ng
Course: CSCI-135
Instructor: Genady Maryash
Assignment: Lab1C

This program determines if the user-inputted year is a leap year or common year.
*/

#include <iostream>
using namespace std;

int main() {
    int year;

    cout << "Enter year: ";
    cin >> year;

    if (year % 4 != 0) {
        cout << "Common year";
    }
    else if (year % 100 != 0) {
        cout << "Leap year";
    }
    else if (year % 400 != 0) {
        cout << "Common year";
    }
    else {
        cout << "Leap year";
    }
    return 0;
}