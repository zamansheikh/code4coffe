#include <stdio.h>
int peliandrome(int a[],int i,int j)
{
    if(i>=j)
    {
        return 1;
    }
    if(a[i]==a[j])
    {
        return peliandrome(a,i+1,j-1);
    }
    else
    {
        return 0;
    }
}
int main()
{

    int i,j,n,flag=0;
    scanf("%d",&n);
    int a[n];

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    if (peliandrome(a,0,n-1)==1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

}
