#include <iostream>
using namespace std;

int main()
{
    int start, end;

    cout << "Enter starting number: ";
    cin >> start;
    cout << "Enter ending number: ";
    cin >> end;

    for (int number = start; number <= end; number++)
    {
        bool isPrime = true;

        if (number <= 1)
            isPrime = false;
        else
        {
            for (int i = 2; i < number; i++)
            {
                if (number % i == 0)
                {
                    isPrime = false;
                    break;
                }
            }
        }

        if (isPrime)
            cout << number << " ";
    }

    return 0;
}
