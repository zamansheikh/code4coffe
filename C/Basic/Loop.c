//ZAMAN4031
#include <stdio.h>
int sum(int n);
int sum(int n)
{
    if(n==1)
        return 1;
    else{
        
        return n + (n > 0 ? sum(n-1) : sum(n+1));
    }
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Sum of %d is %d\n", n, sum(n));


    return 0;
}