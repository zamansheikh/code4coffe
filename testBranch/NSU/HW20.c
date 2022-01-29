#include <stdio.h>
//UserSnippetBy ZAMAN SHEIKH v0.1
int main()
{
    system ("cls");
    int i;
    int n ;
    printf("How Many Row you Wanna PRINT: ");
    scanf("%d", &n);
    for(i=0; i<n; i++){
        for(int j=0; j<i+1; j++){
            if(j%2 == 0){
            printf("1 ");
            }
            else{
                printf("0 ");
            }
        }
        printf("\n");
    }
    return 0;
}