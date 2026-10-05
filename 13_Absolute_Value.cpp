#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (number < 0)
        number = -number;

    cout << "Absolute value = " << number;

    return 0;
}
