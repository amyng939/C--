#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 18;
    int arr[SIZE];

    for (int i = 0; i < SIZE; i += 3)
    {
        arr[i] = 0;
        arr[i + 1] = 1;
        arr[i + 2] = 2;
    }

    for (int j = 0; j < SIZE; j++)
    {
        cout << arr[j] << endl;
    }
    return 0;
}