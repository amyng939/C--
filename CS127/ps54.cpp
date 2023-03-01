//Name: Amy Ng
//Email: amy.ng81@myhunter.cuny.edu
//Date: November 28, 2022
//This program prints "10" 6 times in one row, for 10 rows, using loops.

#include <iostream>
using namespace std;

int main () {

    int i;   //The index variables for the loops
    int j;

    //Nested loop will repeat 6 times within loop that will repeat 10 times:
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 6; j++) {
            cout << "10";
        }
        cout << "\n";
    }

  return 0;
}