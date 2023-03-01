/*
Author: Amy Ng
Course: CSCI-135
Instructor: Genady Maryash
Assignment: Lab1B

This program prints out the smaller of the three integers inputted by the user.
*/

#include <iostream>
using namespace std;

int main() {
    int first;
    int sec;
    int third;

    cout << "Enter the first number: ";
    cin >> first;
    cout << "Enter the second number: ";
    cin >> sec;
    cout << "Enter the third number: ";
    cin >> third;
    cout << endl;

    if (first < sec && first < third) {
        cout << "The smaller of the three is " << first;
    }
    else if (sec < first && sec < third) {
        cout << "The smaller of the three is " << sec;
    }
    else {
        cout << "The smaller of the three is " << third;
    }
    return 0;
}