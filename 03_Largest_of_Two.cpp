#include <iostream>
using namespace std;

int main()
{
    int firstNumber, secondNumber;
    cout << "Enter two numbers: ";
    cin >> firstNumber >> secondNumber;

    if (firstNumber > secondNumber)
        cout << "Largest number = " << firstNumber;
    else
        cout << "Largest number = " << secondNumber;

    return 0;
}
