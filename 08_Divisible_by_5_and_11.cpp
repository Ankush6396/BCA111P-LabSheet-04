#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (number % 5 == 0 && number % 11 == 0)
        cout << "Number is divisible by both 5 and 11";
    else
        cout << "Number is not divisible by both 5 and 11";

    return 0;
}
