#include <iostream>
using namespace std;

int main()
{
    int squares[5] = {0, 1, 4, 9, 16};
    int lucky_numbers[5];

    for (int i = 0; i < 5; i++)
    {
        lucky_numbers[i] = squares[i];
        cout << lucky_numbers[i] << endl;
    }
    return 0;
}