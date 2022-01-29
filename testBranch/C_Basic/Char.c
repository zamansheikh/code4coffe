#include <stdio.h>
int main() 
{
    int n;
    printf("Enter your value: ");
    scanf("%d", &n);
    int i, j,main, h;
    h = n*2 - 1;
    for(int i=0;i<h;i++){
        for(int j=0;j<h;j++){
            main = i < j ? i : j;
            main = main < h-i ? main : h-i-1;
            main = main < h-j-1 ? main : h-j-1;
            printf("%d ", n-main);
        }
        printf("\n");
    }
    return 0;
}