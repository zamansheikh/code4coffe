#include <stdio.h>
int main()
{
    int aa, bb;
    printf("Messi Say\n");
    scanf("%d",&aa);
    printf("Ronaldo Say\n");
    scanf("%d",&bb);
    int i, j, k;
   for(i=1, j=1, k=1; i<=aa || i<=bb; i++){
        if(j<=aa){
            printf("%d ", j);
        }
        if(k<=bb){
            printf("%d", k);
        }
        j++, k++;
        printf("\n");
    }
return 0;
}

 