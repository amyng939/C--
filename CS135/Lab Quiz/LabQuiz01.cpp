/*
Author: Amy Ng
Course: CSCI-135
Instructor: Genady Maryash
Assignment: Lab Quiz 01

This program prints "I love C++" a number of times the user inputted.
*/

#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    for (int i = num; i > 0; i--) {
        cout << "I love C++" << endl;
    }
}