#include <iostream>
using namespace std;

int main() {
    int time;
    cout << "Enter a time in 24 hour format: ";
    cin >> time;
    if (time < 12) {
        cout << "Morning";
    }
    else if (time > 18) {
        cout << "Evening";
    }
    else {
        cout << "Afternoon";
    }
    return 0;
}