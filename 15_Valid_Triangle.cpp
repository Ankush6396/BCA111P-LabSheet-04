#include <iostream>
using namespace std;

int main()
{
    int side1, side2, side3;
    cout << "Enter three sides: ";
    cin >> side1 >> side2 >> side3;

    if (side1 > 0 && side2 > 0 && side3 > 0 &&
        side1 + side2 > side3 &&
        side1 + side3 > side2 &&
        side2 + side3 > side1)
        cout << "Valid triangle";
    else
        cout << "Invalid triangle";

    return 0;
}
