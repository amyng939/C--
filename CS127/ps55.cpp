//Name: Amy Ng
//Email: amy.ng81@myhunter.cuny.edu
//Date: November 28, 2022
//This program converts Celsius to Fahrenheit.

#include <iostream>
using namespace std;

int main() {
    float cel;
    cout << "Enter a temperature in Celsius: ";
    cin >> cel;
    cout << 9.0 / 5 * cel + 32;
    return 0;
}