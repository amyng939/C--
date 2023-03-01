//Name: Amy Ng
//Email: amy.ng81@myhunter.cuny.edu
//Date: November 28, 2022
//This program prints all even integers in [start,end], where start 
//  and end are inclued in the range and are specified by the user.

 #include <iostream>
 using namespace std;

 int main() {

    int start;
    int end;
    int i;

    cout << "Enter start: ";
    cin >> start;
    cout << "Enter end: ";
    cin >> end;

    for (i = start; i < end+1; i++) {
        if (i % 2 == 0) {
            cout << i << "\n";
        }
    }
    return 0;
 }