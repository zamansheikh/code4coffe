#include <stdio.h>
#include <math.h>
//UserSnippetBy ZAMAN SHEIKH v0.1
//prime number is divisible by range (2 to ceil(sqrt of this number));
// 2 and isn't check because of base condition !
void primeCheck(int);

int main()
{
    int number;
    printf("Enter a Number to to Check: ");
    scanf("%d", &number);
    primeCheck(number);
    return 0;
}
void primeCheck(int num)
{
    int number = ceil(sqrt(num));
    int count = 0;
    for (int i = 2; i < number; i++)
    {
        if (num % i == 0)
        {
            count = 1;
        }
    }
    if ((count == 0 && num != 0) || (num == 2) || (num == 3))
    {
        printf("Number is prime \n");

    }
    else printf("Number is not prime \n");
    
    
}