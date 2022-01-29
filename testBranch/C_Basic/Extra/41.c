#include <stdio.h>
int main()
{
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);
    {

        if (n % 2 != 0)
        {
            if (n > 0)
            {
                printf("ODD and POSITIVE\n");
            }

            else if (n < 0)
            {
                printf("ODD and NEGATIVE\n");
            }
        }

        if (n % 2 == 0)
        {
            if (n > 0)
            {
                printf("EVEN and POSITIVE\n");
            }
            else if (n < 0)
            {
                printf("EVEN and NEGATIVE\n");
            }
        }
        if (n == 0)
        {
            printf("NULL\n");
        }
    }
    return 0;
}
