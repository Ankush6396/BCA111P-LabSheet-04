#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    char character;
    cout << "Enter a character: ";
    cin >> character;

    if (isupper(static_cast<unsigned char>(character)))
        cout << "Uppercase character";
    else if (islower(static_cast<unsigned char>(character)))
        cout << "Lowercase character";
    else if (isdigit(static_cast<unsigned char>(character)))
        cout << "Digit";
    else
        cout << "Special character";

    return 0;
}
