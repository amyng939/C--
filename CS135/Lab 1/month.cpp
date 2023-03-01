/*
Author: Amy Ng
Course: CSCI-135
Instructor: Genady Maryash
Assignment: Lab1D

This program asks user for a year and month, and prints out the number of days in that month.
*/

#include <iostream>
using namespace std;

int main() {
    int year;
    int month;

    cout << "Enter year: ";
    cin >> year;
    cout << "Enter month: ";
    cin >> month;

    if (month < 8) {
        if (month == 2) {
            if (year % 4 != 0) {
                cout << "28";
            }
            else if (year % 100 != 0) {
                cout << "29";
            }
            else if (year % 400 != 0) {
                cout << "28";
            }
            else {
                cout << "29";
            }
        }
        else if (month % 2 == 0) {
            cout << "30 days";
        }
        else {
            cout << "31 days";
        }
    }
    else {
        if (month % 2 != 0) {
            cout << "30 days";
        }
        else {
            cout << "31 days";
        }
    }
    return 0;
}