//Name: Amy Ng
//Email: amy.ng81@myhunter.cuny.edu
//Date: November 29, 2022
//This program asks the user for their annual budget and monthly
//  expense and prints out month, monthly expense, and remaining
//  balance in the budget in the end of a month for a year.

#include <iostream>
using namespace std;

int main() {
    int exp;
    float monExpense;
    float budget;
    int i;

    cout << "Input your annual budget: ";
    cin >> budget;
    cout << "Input your month expense: ";
    cin >> exp;
    
    cout << "month\texpense remaining balance of budget\n";
    for (i = 1; i <= 12; i++) {
        if (i <= 6) {
            monExpense = exp;
        }
        else {
            monExpense = exp * 1.15;
        }
        budget = budget - monExpense;
        printf("%5d\t%7.2f\t%27.2f\n", i, monExpense, budget);
    }

    if (budget < 0) {
        cout << "need higher budget";
    }
    return 0;
}