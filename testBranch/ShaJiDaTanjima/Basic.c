#include <stdio.h>
int main()
{
    float inches, feet, fathoms;
    printf("Enter the depth in fathoms : ");
    scanf("%f", &fathoms);
    feet = 6 * fathoms;
    inches = 12 * feet;
    printf("Its depth at sea: \n");
    printf(" %.2f fathoms \n", fathoms);
    printf(" %.2f feet \n", feet);
    printf(" %.2f inches \n", inches);
    return 0;
}
