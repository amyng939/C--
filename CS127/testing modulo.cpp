#include <iostream>
using namespace std;

int main() {
    std::string result;
    int num;
    int rem;

    cout << "Enter a number: ";
    cin >> num;
    
    if (num < 0) {
        num = num * -1;
    }
    
    result = "";
    while (num > 0) {
        rem = num % 2;
        result = to_string(rem) + result;
        num = num/2;
    }
    cout << result;
    return 0;
}