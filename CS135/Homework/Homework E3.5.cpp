/*
Author: Amy Ng
Course: CSCI-135
Instructor: Genady Maryash
Assignment: E3.5

This program reads three numbers and prints "increasing", "decreasing", or
"neither" depending on the order.
*/

#include <iostream>
using namespace std;

int main()
{   
    cout << "Enter three numbers with a space in between: ";
    int one;
    cin >> one;
    int two;
    cin >> two;
    int three;
    cin >> three;

    if (one != two && one != three && two != three)
    {
        if (one < two && two < three)
        {
            cout << "increasing";
        }

        else if (one > two && two > three)
        {
            cout << "decreasing";
        }

        else
        {
            cout << "neither";
        }
    }

    else
    {
        cout << "neither";
    }

    return 0;
}