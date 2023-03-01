//Name: Amy Ng
//Email: amy.ng81@myhunter.cuny.edu
//Date: November 29, 2022
//This program draws a triangle.

#include <iostream>
using namespace std;

int main() {
    int num;
    char sym;
    int i;
    int j;
    int k;

    cout << "Enter an int: ";
    cin >> num;
    cout << "Enter a symbol other than space: ";
    cin >> sym;

    for (i = 1; i <= num; i++) {
        for (j = num-1; j >= i; j--) {
            cout << " ";
        }
        for (k = i; k > 0; k--) {
            cout << sym;
        }
        cout << "\n";
    }
    return 0;
}