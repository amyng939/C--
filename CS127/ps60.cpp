//Name: Amy Ng
//Email: amy.ng81@myhunter.cuny.edu
//Date: November 29, 2022
//This program asks the user for a whole number between -128 and 127 and prints out
//  the number in "two's complement" notation

#include <iostream>
using namespace std;

int main() {
    int n;
    int num;
    std::string result;
    int rem;
    char size;
    int len;
    int k;

    cout << "Enter an int in [-128, 127]: ";
    cin >> n;
    num = n;
    if (num < 0) {
        num = num * -1;
    }

    result = "";
    while (num > 0) {
        rem = num % 2;
        result = to_string(rem) + result;
        num = num/2;
    }

    size = 8;
    len = result.length();
    for (int i = 0; i < size - len; i++) {
        result = "0" + result;
    }

    if (n < 0) {
        //swaps 0's and 1's
        for (int j = 0; j < size; j++) {
            if (result[j] == '0') {
                result[j] = '1';
            }
            else {
                result[j] = '0';
            }
            //string literals (type const char *) "", character literals (type char) ''
            //string literals allow multiple chars, char lit only one char
            //string lit and char lit not compatible w/ each other.
        }
        //adds one to binary
        k = size-1;
        while (result[k] == '1') {
            result[k] = '0';
            k = k - 1;
            }
        result[k] = '1';
        }                 

    cout << result;
    return 0;
}