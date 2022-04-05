#include <stdio.h>
#include <stdbool.h>
bool palindrome = false;
bool isPalindrome(int number)
{
    int temp = number;
    int reverse = 0;
    while (temp != 0)
    {
        reverse = reverse * 10;
        reverse = reverse + temp % 10;
        temp = temp / 10;
    }
    if (number == reverse)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int number;
    scanf("%d", &number);
    for (int i = number; i > 0; i--)
    {
        if (isPalindrome(i))
        {
            palindrome = true;
            printf("%d\n", i);
            break;
        }
    }

    return 0;
}