#include<stdio.h>
#include<stdbool.h>

bool isPalindrome(int n)
{
    if (n < 10) return false;//extra you can remove this line
    int temp=n,rev=0;
    while(n>0)
    {
        rev=rev*10+n%10;
        n=n/10;
    }
    if(temp==rev)
        return true;
    else
        return false;
}

int main(){
    int n;
    scanf("%d",&n);
    for (int i = 0; i < n; i++) {
        if(isPalindrome(i)) continue;
        else printf("%d ",i);
    }
}