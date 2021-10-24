#include <stdio.h>
//UserSnippetBy ZAMAN SHEIKH v0.1
int bine2dec(int );

int main()
{
    int binary = 0;
    printf("Enter the binary Digit: ");
    scanf("%d", &binary);
    printf("%d",bine2dec(binary));

    return 0;
}
int bine2dec(int binary)
{
    int tranked = 0;
    int sum = 0, pow = 1 ;
    while (binary != 0) {
        tranked = binary%10;
        sum += (tranked* pow);
        binary /= 10;
        pow *= 2;
    }
    return sum;
}