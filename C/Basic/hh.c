//sum of array
#include<stdio.h>
int main()
{
    int a[10],i,n,sum=0;

    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    //check sum is prime or not
   for(i=2;i<=sum/2;i++)
    {
         if(sum%i==0)
         {
              printf("Sum of all element is not a prime number.\n");
              break;
         }
    }
    if(i==sum/2+1)
    {
        printf("Sum of all element is a prime number.\n");
    }
    return 0;
}