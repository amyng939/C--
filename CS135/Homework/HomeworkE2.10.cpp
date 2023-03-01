/*
Author: Amy Ng
Course: CSCI-135
Instructor: Genady Maryash
Assignment: Homework E2.10

This program asks user to input number of gallons of gas in the tank, fuel
efficiency in miles per gallon, and price of gas per gallon then prints cost
per 100 miles and how far the car can go with the gas in the tank.
*/

#include <iostream>
using namespace std;

int main ()
{
    cout << "Enter number of gallons of gas in the tank: ";
    double gas;
    cin >> gas;

    cout << "Enter fuel efficiency ";
    double mile;
    cin >> mile;

    cout << "Enter price of gas per gallon: ";
    double price;
    cin >> price;

    cout << 100 / mile * price << endl;
    cout << gas * mile;

    return 0;
}