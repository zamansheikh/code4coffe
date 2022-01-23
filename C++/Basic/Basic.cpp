#include <iostream>
using namespace std;

int main()
{

    //I'm writing a program that will reverse a number.
    cout << "Enter a Number:" << endl;
    int number, revNumber = 0;
    cin >> number;
    if (number < 0)
    {
        number *= -1;
        while (number != 0)
        {
            revNumber *= 10;
            int lastDigit = number % 10;
            revNumber += lastDigit;
            number /= 10;
        }
        revNumber *= -1;
    }
    else
    {
        while (number != 0)
        {
            revNumber *= 10;
            //int lastDigit = number % 10;
            revNumber += number % 10;
            number /= 10;
        }
    }

    cout << "The Reverse of the number is: " << revNumber << endl;

    return 0;
}
