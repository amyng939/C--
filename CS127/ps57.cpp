//Name: Amy Ng
//Email: amy.ng81@myhunter.cuny.edu
//Date: November 29, 2022
//This program asks user for the current number of credit hours and prints
// the respective grade.

#include <iostream>
using namespace std;

int main() {
    
    int hr;

    cout << "Enter number of credit hours taken: ";
    cin >> hr;
    if (hr < 28) {
        cout << "freshman";
    }
    else if (hr < 61) {
        cout << "sophmore";
    }
    else if (hr < 94) {
        cout << "junior";
    }
    else {
        cout << "senior";
    }
    return 0;
}