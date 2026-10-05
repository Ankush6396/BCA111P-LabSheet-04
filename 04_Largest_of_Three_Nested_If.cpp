#include <iostream>
using namespace std;

int main()
{
    int firstNumber, secondNumber, thirdNumber;
    cout << "Enter three numbers: ";
    cin >> firstNumber >> secondNumber >> thirdNumber;

    if (firstNumber >= secondNumber)
    {
        if (firstNumber >= thirdNumber)
            cout << "Largest number = " << firstNumber;
        else
            cout << "Largest number = " << thirdNumber;
    }
    else
    {
        if (secondNumber >= thirdNumber)
            cout << "Largest number = " << secondNumber;
        else
            cout << "Largest number = " << thirdNumber;
    }

    return 0;
}
